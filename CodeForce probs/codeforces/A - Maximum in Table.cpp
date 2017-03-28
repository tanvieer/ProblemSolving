#include<iostream>
using namespace std;
long n,i,j;
long m[101][101];

main()
{cin>>n;

 for(j=1;j<=n;j++) m[1][j]=1;

 for(i=2;i<=n;i++)
  for(j=1;j<=n;j++)
   m[i][j]=m[i-1][j]+m[i][j-1];

 cout<<m[n][n]<<endl;
}
