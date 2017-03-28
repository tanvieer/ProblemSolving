#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n==0)
        {
            cout<<"Case "<<i<<": "<<n<<endl;
            continue;
        }
        else if(n==2 || n==3)
            {
            cout<<"Case "<<i<<": 1"<<endl;
            continue;
        }
        else if(n>3 && n<9)
            {
            cout<<"Case "<<i<<": 2"<<endl;
            continue;
        }
        if(n%2!=0)
            n++;
        n/=2;
        if(n%2!=0)
            n++;
        n/=2;
        cout<<"Case "<<i<<": "<<n<<endl;
    }
}
