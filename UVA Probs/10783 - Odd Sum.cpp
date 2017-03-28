#include<iostream>
using namespace std;
int main()
{
    int t,s,e,j,a=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    { cin>>s>>e;
        for(j=s;j<=e;j++)
        {
            if(j%2!=0)
                a +=j;
        }
        cout<<"Case "<<i<<": "<<a<<endl;
        a=0;
    }
}
