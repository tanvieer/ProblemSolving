/*
INPUT: 6
0 1
0 2
0 5
4 0
4 3
4 5
*/

#include<bits/stdc++.h>
using namespace std;
int adj[100][100]= {0};
int visited[10000]= {0};
deque<int> tropo;
int n,e;

void dfs(int u)
{
    if(visited[u]!=1)
    {
        visited[u]=1;
        for(int i=0; i<n; i++)
        {
            if(adj[u][i]==1 && !visited[i])
            {
                dfs(i);
            }
        }
    }
    cout<<u<<"   ";
    tropo.push_back(u);
}
int main()
{
    int u,s,d;
    /*  cout<<"Enter number of nodes : ";
      cin>>n;
      cout<<"Enter number of edeges : ";
      cin>>e;
      for(int i=0; i<e; i++)
      {
          cout<<"Enter source: ";
          cin>>s;
          cout<<"Enter destination: ";
          cin>>d;
          adj[s][d]=1;
      }
      */
    n=4;
   // e=6;
	adj[0][1]=1;
    adj[1][2]=1;
    adj[2][0]=1;
    adj[1][3]=1;
    adj[3][2]=1;



  //  cout<<"\nEnter starting node: ";
//   cin>>u; dfs(u);
cout<<"\nDFS order : ";
    dfs(0);
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }

    cout<<"\n\nAfter tropo sort :\n"<<endl;
    while (!tropo.empty())
    {
        cout << tropo.back()<<"    ";
        tropo.pop_back();
    }
}
