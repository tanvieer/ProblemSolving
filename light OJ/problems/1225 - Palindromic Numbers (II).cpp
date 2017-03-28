#include<stdio.h>
#include<string.h>

int main()
{
char a[12];
int test,j,k,flag,n,i;
scanf("%d",&test);
for(k=1;k<=test;k++)
{
  scanf("%s",a);
  flag=0;
  n=strlen(a);
  for(i=0,j=n-1;i<n/2;i++,j--)
  {
    if(a[i]!=a[j])
    {
      flag=1;
      printf("Case %d: No\n",k);
      break;
    }
  }
  if(flag==1)
  continue;

  printf("Case %d: Yes\n",k);

}
return 0;
}
