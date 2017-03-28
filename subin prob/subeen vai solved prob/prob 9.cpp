#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,i,j,T,x;
    float ans=0;

     cin>>a;
       for(j=0;j<a;j++)
       {
           cin>>T;
           for(i=0;i<T;i++)
           {
               cin>>x;
               ans=ans+x;
           }
           ans=ans/T;
           cout <<fixed;
           cout <<setprecision(2)<<ans<<endl;
           ans=0;
       }
}
