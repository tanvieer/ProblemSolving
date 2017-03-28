#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool prime[M];
int dp[M];
void primeNum()
{
    prime[1]=true;
    for(int i=2;i<=sqrt(M);i++){
        if(prime[i]==false)
        {
             for(int j=i+i; j<=M ;j+=i)
                   prime[j]=true;
        }
    }
}
int sdgt(int j)
{
    int r=0;
    for(;j>0;j/=10)
        r+=j%10;
    return r;
}
void dgtp()
{   int x=1;
    for(int j=3; j<=M ;j+=2){
        if(!prime[j] && !prime[sdgt(j)])
          x++;
        dp[j]=dp[j+1]=x;
    }
}
int main()
{
    primeNum();
    dgtp();
    dp[0]=dp[1]=0;
    dp[2]=1;
    int t1,t2,n;
    cin>>n;
    while(n--)
    {
        cin>>t1>>t2;
        cout<<dp[t2]-dp[t1-1]<<endl;
    }
}
