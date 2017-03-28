#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,v,n[100],r=1;
    cin>>t>>v;
    for(int i=0;i<t;i++)
    {
        cin>>n[i];
        r*=n[i];
    }
    if(r<pow(v,t))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
