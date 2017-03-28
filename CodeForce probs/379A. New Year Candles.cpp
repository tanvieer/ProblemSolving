#include<iostream>
using namespace std;
int main()
{
 int a,b,c,z=0;
 while(cin>>a>>b)
 {
  z=a;
        while(a>=b)
        {
            z+=a/b;
            a=a/b+a%b;
        }
  cout<<z<<endl;
 }
}
