#include<iostream>
using namespace std;
int check_prime(int a)
{
   int c;
   for (c=2;c<=a-1;c++)
   {
      if(a%c==0)
	 return 0;
   }
   if(c==a)
      return 1;
}
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
        cin>>a[i];
    cout<<"prime numbers are: "<<endl;
    for(i=0;i<10;i++)
    {
        if(check_prime(a[i]) && a[i]>1)
            cout<<a[i]<<endl;
    }
    return 0;
}
