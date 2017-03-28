#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t,r1,r2,c1,c2;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r1>>c1>>r2>>c2;
        if(r1+c2==r2+c1||abs(r1-r2)==abs(c1-c2))
                cout<<"Case "<<i<<": 1"<<endl;
        else if(r1+c2==abs(r2-c1)||abs(r1-c2)==r2+c1||(r1+r2)%2==(c1+c2)%2)
                cout<<"Case "<<i<<": 2"<<endl;
        else
            cout<<"Case "<<i<<": impossible"<<endl;
    }
}
