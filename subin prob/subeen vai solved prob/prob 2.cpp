#include<iostream>
using namespace std;
int main()
{
    int i,j,k,p=0,n=0;
    cin>>j;
    for(i=0;i<j;i++)
    {
        cin>>k;
        if (k>0)
            p++;
        else n++;
    }
cout<<p<<" "<<n;
}
