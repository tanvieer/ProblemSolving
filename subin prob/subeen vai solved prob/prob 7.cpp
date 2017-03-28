#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T,b,d,i;
    double c;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>b;
        c=sqrt(b);
        c=(int)c;
        d=pow(c,2);
        if(b==d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
