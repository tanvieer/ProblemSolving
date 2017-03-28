#include<iostream>
using namespace std;
int main(){
    int n,a,b,x,i;
    cin>>n;
    if (n==0)
        {
          cout<<"0"<<endl;
          return 0;
        }
    a = 1;
    b = 1;
    cout<<"0";
    for (i=1;i<n;i++){
        cout<<" "<<a;
        x = a;
        a = b;
        b = b+x;
    }
    cout<<endl;
}
