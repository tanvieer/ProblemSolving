#include<stdio.h>
#include<math.h>

int an(int n)
{   float ans=0;
    int j;
    for(j=1;j<=n;j++)
    {
        ans +=pow(j,3);
    }
    return ans;
}

int main()
{
    int n,i,T;
    float ans=0;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
    scanf("%d",&n);
    printf("Case %d: %d\n",i+1,(int)an(n));
}
}
