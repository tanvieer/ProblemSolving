#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
  if(n<2)
    return false;
  for(int i=2;i<=sqrt(n)+1;i++)
  {
    if(n%i==0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
    char c[100],i,l;
    int sum;
    while(gets(c))
    {
        l=strlen(c);
        sum=0;
        for(i=0;i<l;i++)
        {
            if(c[i]>='a' && c[i]<='z')
            {
                sum+=c[i]-96;
            }
            else
            {
                sum+=c[i]-38;
            }
        }
        if(isPrime(sum) || sum==1 || sum==2)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
