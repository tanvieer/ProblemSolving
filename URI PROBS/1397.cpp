#include<stdio.h>
int main(){
    int n,a,b,c1,c2;
    while (scanf("%d",&n) && n != 0){
        c1=0;
        c2=0;
        while (n--){
            scanf("%d%d",&a,&b);
            if(a>b)
              c1++;
            if(b>a)
              c2++;
        }
        printf("%d %d\n",c1,c2);
    }
}
