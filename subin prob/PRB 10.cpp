#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,T,m=0,n,r,v;
   cin>>T;
   while(T--)
    {
        for(i=0;i<10;i++)
       {n=0;
        cin>>v;
        if(v==1 || v==0)
           n++;
        for(j=2;j<=sqrt(v);j++)
             {
            r=v%j;
            if(r==0)
                {n++;break;}
             }
            if(n==0 || v==2)
            m++;
       }
              cout<<m<<endl;
              m=0;
     }
}
