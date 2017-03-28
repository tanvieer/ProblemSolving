#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[2000],t,i,c=0,r=0;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>a[i];
        }
        sort(a,a+i);
      for(i=0;i<t;i++)
        {
         if((a[t-1]>=a[i]) && c<=a[t-1] )
         {
            c=c+a[i];
            r++;
         }
        }
        cout<<r<<endl;
        r=0;
        c=0;

    }
}
