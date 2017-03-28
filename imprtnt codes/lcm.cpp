#include<iostream>
using namespace std;
int lcm(int a, int b) {
  for (int i = 1; ; i++) {
    if (i % a == 0 && i % b == 0) {
      return i;
    }
  }
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    cout<<"LCM= "<<lcm(a,b)<<endl;

}
