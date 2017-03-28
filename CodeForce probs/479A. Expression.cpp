#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,m[5];
    cin>>a>>b>>c;
    m[0]=(a+b)*c;
    m[1]=a*(b+c);
    m[2]=a*b*c;
    m[3]=(a+b)*c;
    m[4]=a+b+c;
    sort(m,m+5);
    cout<<m[4];
}
