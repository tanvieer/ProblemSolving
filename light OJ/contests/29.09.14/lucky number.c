#include<stdio.h>
#include<string.h>

int lucky(char n[1000])
{ int j;
    for(j=0;j<strlen(n);j++)
        {
         printf("%s=",n[j]);
          if(n[j]=='7' || n[j]=='5')
            continue;
          else
            return 0;
        }
        return 1;
}

int main()
{
    char n[1000],n1[1000];
    int t,i,j,c=0,k,l=10;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s%s",&n,&n1);
        c=c+lucky(n);
        while(strstr(n,n1)==0)
        {   n[strlen(n)]++;
            if (n[strlen(n)]>=48 && n[strlen(n)]<=57)
          {
           for(k=1;k<strlen(n);k++)
           c=c+lucky(n);
          }
          else if(n[strlen(n)]==58)
          {
              n[strlen(n)]=48;
              if((n[strlen(n)-1]+1)>57);
          }
        }
        printf("%d\n",c);
    }

}
