#include<stdio.h>
int main(){
   int ans,a,b,c,d,e,f,i;
   scanf("%d",&e);
   for(i=1;i<=e;i++)
   {
       scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
       ans=((b*c)-(d*f));
       printf("Case %d: %d\n",i,ans+a);
   }

}
