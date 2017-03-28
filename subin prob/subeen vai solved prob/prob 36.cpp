#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T,r1,c1,r2,c2,i;
    double sum1,sum2;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>r1>>c1>>r2>>c2;
        sum1=r1-r2;
        sum1=abs(sum1);
        sum2=c1-c2;
        sum2=abs(sum2);
        if(sum1>sum2)
            cout<<"Case "<<i<<": "<<sum1<<endl;
        else
            cout<<"Case "<<i<<": "<<sum2<<endl;
    }
}
