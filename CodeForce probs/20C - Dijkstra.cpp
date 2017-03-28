#include<iostream>
#include<vector>
#include<set>
using namespace std;


const int maxn=100000,maxm=100000;
const long long maxint=1LL<<63LL-1LL;
int n,m;


set <int> S;
set <pair <long long,long long> >Q;

vector <int> ans;


struct vertex{
    int parent;
    long long dis;
    vector <int> adj,w;
    }v[maxn];

////////////////////////////////

inline void INPUT(){
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;

        a--;b--;

        v[a].adj.push_back(b);
        v[a].w.push_back(w);
        v[b].adj.push_back(a);
        v[b].w.push_back(w);
    }
}


inline void INITIALIZE(){
    for(int i=0;i<n;i++)
        v[i].dis=maxint;


    v[0].parent=-1;
    v[0].dis=0LL;
}


inline void RELAX(int u){
    for(int i=0;i<v[u].adj.size();i++){
        int x=v[u].adj[i],w=v[u].w[i];

        if(v[x].dis>(v[u].dis)+w){
            pair <long long,long long> p=make_pair(v[x].dis,x);
            Q.erase(p);
            v[x].dis=(v[u].dis)+w;
            v[x].parent=u;

            p=make_pair(v[x].dis,x);
            Q.insert(p);
        }
    }
}



inline void DIJKSTRA(){
    INITIALIZE();

    for(int i=0;i<n;i++){
        pair <long long,long long> p=make_pair(v[i].dis,i);
        Q.insert(p);
    }

    pair <long long,long long> p=make_pair(0LL,0LL);

    Q.erase(p);
    S.insert(0);

    RELAX(0);


    while(Q.size()!=0){
        pair <long long,long long> min=*Q.begin();
        Q.erase(min);

        S.insert(min.second);

        RELAX(min.second);
    }
}


inline void FIND_PATH(int u){
    ans.push_back(u);

    if(v[u].parent!=-1)
        FIND_PATH(v[u].parent);
}


////////////////////////////////


int main(){
    INPUT();


    DIJKSTRA();


    if(v[n-1].dis==maxint)
        cout<<-1<<endl;

    else{

    FIND_PATH(n-1);

    for(int i=ans.size()-1;i>=0;i--)
        cout<<ans[i]+1<<" ";
    }


    return 0;
}

