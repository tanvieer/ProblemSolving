#include <stdio.h>
#include <string.h>
int main()
{
   char a[4], b[4];
   char *w;
   int T,i,p;
   scanf("%d",&T);
for(i=1;i<=T;i++)
{
    if(i==1)
   {
   scanf("%s",&a);
   strlwr(a);
   strcpy(b,a);
   strrev(b);

   if( strcmp(a,b)== 0)
       w="Alice";
   }
   else if(i==2) {
   scanf("%s",&a);
   strlwr(a);
   strcpy(b,a);
   strrev(b);

   if( strcmp(a,b)== 0)
       w="Bob";
   }
}
   printf("%s",w);
   }
