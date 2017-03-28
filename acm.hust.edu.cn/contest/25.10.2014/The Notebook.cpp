#include<iostream>
using namespace std;
int main()
{
    int a,b=0,c=0,i;
    while(cin>>a)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                b=a/i;
                c=i;
                i=0;
                break;
            }
        }
        if(c==0 || b==0)
            cout<<"-1"<<endl;
        else
            cout<<c<<b<<endl;
        c=0;b=0;

    }
}
