#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float T,n;
    int i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
    cin>>n;
    cout<<"Case "<<i<<": "<<(1.0/4)*pow(n,4)+(1.0/2)*pow(n,3)+(1.0/4)*pow(n,2)<<endl;
}
}
