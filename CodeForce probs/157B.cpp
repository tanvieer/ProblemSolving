#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,r[1001],i,c,a;
     cin>>n;
    for(i=0;i<n;++i)
       cin>>r[i];
    sort(r,r+n);
    c=1;
    a=0;
    for(i=n-1;i>=0;i--)
      {
        a+=r[i]*r[i]*c;
        c*=-1;
      }
    cout<<fixed<<setprecision(10)<<a*3.1415926536<<endl;
}
