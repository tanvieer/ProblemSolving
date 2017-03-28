#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(2*x<=y) cout<<x<<endl;

        else if(2*y<=x) cout<<y<<endl;

        else cout<<(x+y)/3<<endl;
    }
}
