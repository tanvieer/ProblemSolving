#include <stack>
#include <deque>
#include <iostream>
using namespace std;
int adj[100][100];
deque<int> tropo;
int n=6,e;
int visited[100]={0};
void dfs(int root)
{
	int v,w;
	stack<int>s;
	s.push(root);
	v=s.top();
	while(!s.empty())
	{
		visited[v]=1;
		for(int w=0;w<n;w++)
		{
			if(adj[v][w]==1 && !visited[w])
			{
				s.push(w);
				visited[w]=1;
				w=0;
			}
			v=s.top();

		}
		v=s.top();
		cout<<v<<"    ";
		tropo.push_back(v);
		s.pop();
	}
	return;
}
int main()
{
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

	cout<<"\nDFS :\n"<<endl;
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
