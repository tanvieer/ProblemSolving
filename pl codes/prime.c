#include<stdio.h>

int Prime(int n) {
    int i;
    if(n==2)
       return 1;
    else if(n < 2)
        return 0;
  for (i=2;i<=sqrt(n)+1;i++) {
    if (n%i==0) {
      return 0;
    }
  }
  return 1;
}
int main()
{
    int p;
    printf("Enter a number: ");
    scanf("%d",&p);
    if(Prime(p))
      printf("\n%d is a prime number.\n",p);
    else
      printf("\n%d is not a prime number.\n",p);
}
