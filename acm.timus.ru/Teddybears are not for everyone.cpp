// Bismillahir rahmanir rahim , thanks to allah for everything
#include <bits/stdc++.h>
using namespace std;
bool th[1000];
int main() {
    int n,m,r,i,j,a,time=0;
    cin>>n>>m;
    for (i=0;i<m;i++) {
        cin>>a;
        th[a]=1;
    }
    for(i=2;i<=n;i++)
        for(j=i+1;j<=n;j++) {
             r=m-th[1]-th[i]-th[j];
           if((n-3)/3 <=r && (th[1]==1 || th[i]==1 || th[j]==1))
              time++;
        }
    cout<<time;
    return 0;
}
