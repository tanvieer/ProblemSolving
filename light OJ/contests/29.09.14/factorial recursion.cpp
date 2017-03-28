#include<stdio.h>
long long int fact(int n)
{
    int x=n;

    while(n>1)
    {
        x=x*(n-1);
        n--;
        fact(n);
    }

    return(x);
}
int main()
{
    long long int n,fact1;
    scanf("%lld",&n);
    fact1=fact(n);
    printf("%lld",fact1);
}
