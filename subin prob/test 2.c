#include<stdio.h>
#include<string.h>
int main()
{
    int i,T;
    char A[100],B[100];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
   {
       scanf("%d%d",&A,&B);
    if(strcmp(A,B)==0)
        printf("Case %d: =\n",i);
    else if(strcmp(A,B)>0)
        printf("Case %d: >\n",i);
    else
        printf("Case %d: <\n",i);

    }
}
