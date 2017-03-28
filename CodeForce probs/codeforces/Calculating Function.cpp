#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;

    cin>>t;

     if(t%2==0)
       cout<<t/2<<endl;
     else
     {
       t=(t/2)+1;
       cout<<-t<<endl;
     }
}
