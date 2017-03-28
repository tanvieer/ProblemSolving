#include<stdio.h>
int main()
{
    int T;
    double A,B;
    scanf("%d",&T);
    for(int k=1;k<=T;k++)
    {
        scanf("%d%d",&A,&B);
        if(A==B)
            {printf("Case %d: =\n",k);}
        else if(A<B)
            {printf("Case %d: <\n",k);}
        else
            {printf("Case %d: >\n",k);}
    }
}
