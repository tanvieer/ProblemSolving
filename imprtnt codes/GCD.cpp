#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b) {
  while (b != 0)  {
    long long int t = b;
      b=a%b;
      a=t;
  }
  return a;
}
int main()
{
    long long int x,y;
    while(cin>>x>>y)
    {
        cout<<gcd(x,y)<<endl;
    }
}
