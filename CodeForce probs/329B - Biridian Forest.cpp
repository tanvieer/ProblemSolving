
#include<iostream>
#include<vector>
using namespace std;

const int maxr=1000,maxc=1000;
int r,c;
vector <pair <int,int> > Q;

struct vertex{
    bool mark;
    vector <pair<int,int> > adj;
    char ch;
    int dis1,dis2;
    }v[maxr][maxc];

///////////////////////////////


inline void input(){
    cin>>r>>c;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>v[i][j].ch;
}


inline void find_adj(){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v[i][j].ch!='T'){
                if(i-1>=0&&v[i-1][j].ch!='T'){
                    pair <int,int> p=make_pair(i-1,j);
                    v[i][j].adj.push_back(p);
                }
                if(i+1<r&&v[i+1][j].ch!='T'){
                    pair <int,int> p=make_pair(i+1,j);
                    v[i][j].adj.push_back(p);
                }
                if(j-1>=0&&v[i][j-1].ch!='T'){
                    pair <int,int> p=make_pair(i,j-1);
                    v[i][j].adj.push_back(p);
                }
                if(j+1<c&&v[i][j+1].ch!='T'){
                    pair <int,int> p=make_pair(i,j+1);
                    v[i][j].adj.push_back(p);
                }
            }
        }
    }
}


void BFS1(pair <int,int> a){
    int x=a.first,y=a.second;
    Q.push_back(a);
    v[x][y].mark=1;
    v[x][y].dis1=0;

    int head=0,tail=1;
    while(head<tail){
        pair<int,int> p=Q[head];
        head++;

        x=p.first;
        y=p.second;

        for(int i=0;i<v[x][y].adj.size();i++){
            pair <int,int> p2=make_pair(v[x][y].adj[i].first,v[x][y].adj[i].second);

            if(v[p2.first][p2.second].mark==0){
                v[p2.first][p2.second].mark=1;
                Q.push_back(p2);
                tail++;

                v[p2.first][p2.second].dis1=v[x][y].dis1+1;
            }
        }
    }
}



void BFS2(pair <int,int> a){
    Q.clear();
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            v[i][j].mark=0;


    int x=a.first,y=a.second;
    Q.push_back(a);
    v[x][y].mark=1;
    v[x][y].dis2=0;

    int head=0,tail=1;
    while(head<tail){
        pair<int,int> p=Q[head];
        head++;

        x=p.first;
        y=p.second;

        for(int i=0;i<v[x][y].adj.size();i++){
            pair <int,int> p2=make_pair(v[x][y].adj[i].first,v[x][y].adj[i].second);

            if(v[p2.first][p2.second].mark==0){
                v[p2.first][p2.second].mark=1;
                Q.push_back(p2);
                tail++;

                v[p2.first][p2.second].dis2=v[x][y].dis2+1;
            }
        }
    }



}

///////////////////////////////


int main(){
    input();
    find_adj();


    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            v[i][j].dis1=1<<31-1;
            v[i][j].dis2=1<<31-1;
        }


    pair <int,int> p1,p2;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            if(v[i][j].ch=='S')
                p1=make_pair(i,j);
            if(v[i][j].ch=='E')
                p2=make_pair(i,j);
        }

    BFS1(p1);
    BFS2(p2);


    int dis=v[p2.first][p2.second].dis1;
    long long ans=0;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(v[i][j].ch<=57&&v[i][j].ch>=48&&v[i][j].dis2<=dis)
                ans+=v[i][j].ch-48;

    /*for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            for(int k=0;k<v[i][j].adj.size();k++)
                cout<<v[i][j].adj[k].first<<","<<v[i][j].adj[k].second<<"   ";
        cout<<endl;
        }
    */
    //cout<<dis<<endl<<endl;

    /*for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cout<<v[i][j].dis1<<"  "<<v[i][j].dis2<<endl;
    */

    cout<<ans<<endl;

    return 0;
}
