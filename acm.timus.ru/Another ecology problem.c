#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int dp[10008][2];
int main()
{
    int n,m,k,i,j;

    while(scanf("%d%d%d",&n,&m,&k)>0)
    {
        memset(dp,0,sizeof(dp));
        for(dp[k][0]=k,i=1;i<k;i++)
            dp[i][0]=m;
        if(m<k) for(i=m+1;i<=k;i++)
            dp[i][0]=i;
        for(i=k+1;i<=n;i++)
        {
            for(j=1;j<=k;j++)
            {
                if(i-j<0)
                   continue;
                if(dp[i][0]<dp[i-j][1]+j||(dp[i][0]==dp[i-j][1]+j&&dp[i][1]>dp[i-j][0]))
                {
                    dp[i][0]=dp[i-j][1]+j;
                    dp[i][1]=dp[i-j][0];
                }
            }
        }
        printf("%d %d\n",dp[n][0],dp[n][1]);
    }

    return 0;
}
