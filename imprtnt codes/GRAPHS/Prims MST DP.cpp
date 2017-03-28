/*
Test case1 :

Input:
9
10
8 4 8
8 0 4
0 1 3
0 3 2
3 2 6
3 4 1
1 7 4
2 7 2
2 5 1
5 6 8
0


OUTPUT:
0 ------> 3
3 ------> 4
0 ------> 1
1 ------> 7
7 ------> 2
2 ------> 5
5 ------> 6
0 ------> 8
-----------------------------------------------------
Test Case 2:

Input:
5
7
1 2 2
0 2 4
1 0 4
2 3 8
0 3 6
3 4 9
0 4 6
1


OUTPUT:
1 ---------> 2
1 ---------> 0
0 ---------> 3
0 ---------> 4

*/


#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
int adj[10][10];
pair <int,int> visited[100];
int v,e,st;
bool check=false,check1=false;
int t_cost=0;



void prims(int s)
{
    int minimum=INT_MAX,u,k;
    u=st;
    check = false;
    visited[s].first = 1;
    for(int i=0; i<v; i++)
    {
        if( adj[s][i] + visited[s].second < minimum && visited[i].first == 0 && adj[s][i] != 0 )
        {
            minimum = adj[s][i] + visited[s].second;
            u=i;
            k=i;
        }
        if( visited[i].first==0 && adj[s][i] != 0 )
        {
            check=true;
        }
    }
    if( check )
    {
        int temp = u;
        check1 = false;
        for(int j=0; j<v ; j++)
        {
            if( (visited[j].second + adj[k][j]) <minimum && visited[j].first == 1 && adj[k][j] != 0 )
            {
                minimum = adj[k][j] + visited[j].second ;
                u=j;
                check1 = true;
            }
        }
        if(check1)
        {
            cout<<u<<"------------>"<<temp<<endl;
            visited[temp].second += adj[u][temp];
            t_cost += adj[u][temp];
            visited[temp].first = 1;
            prims(u);
        }
        else
        {
            cout<<s<<"------------>"<<u<<endl;
            visited[u].second += adj[s][u];
            t_cost += adj[s][u];
            visited[u].first = 1;
            prims(u);
        }
    }
    return;
}
int main()
{
    int a,b,w;
    for(int i=0; i<e; i++)
    {
        for (int j=0; j<e; j++)
        {
            adj[i][j]=INT_MAX;
            visited[i].first=visited[i].second=0;
        }
    }
    cout<<"\nEnter number of vertices : ";
    cin>>v;
    cout<<"\nEnter number of edges : ";
    cin>>e;
    for(int i=0; i<e; i++)
    {
        cout<<"\nEnter edge Edge and weight :";
        cin>>a>>b>>w;
        adj[a][b]=adj[b][a]=w;
    }
    cout<<"Enter Starting node: ";
    cin>>st;
    cout<<"\n"<<endl;
    prims(st);

    for(int l=0; l<v; l++)
    {
        if( !visited[l].first )
            prims(l);
    }


    cout<<"\n\nTotal cost is : "<< t_cost<<endl;
    getch();
}
