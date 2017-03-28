#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double n;
  int i;
    cout.precision(4);
    cin>>n;
    for (i=0;i<=99;i++){
        cout<<"N["<<i<<"] = "<<fixed<<n<<endl;
        n /=2;
    }
}
