#include <stdio.h>

int main(){
    int t, cases=0;
    long long int a, n, m;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld", &n, &m);
        n = n/2;
        m = m*n;
        printf("Case %d: %lld\n",++cases,m);
    }
    return 0;
}
