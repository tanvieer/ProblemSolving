#include<stdio.h>
int main()
{
    long long int n;
    int t,i;
    scanf("%d",&n);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        if(n%2==0)
            printf("Case %d: Even\n",i);
        else
            printf("Case %d: Odd\n",i);
    }
}
