#include <iostream>
using namespace std;
int main(){
    int a,b=1;
    cin>>a;
    while(a--){
        cout<<b++<<" ";
        cout<<b++<<" ";
        cout<<b++<<" ";
        b++;
        cout<<"PUM"<<endl;
    }
}
