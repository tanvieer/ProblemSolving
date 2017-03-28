#include<iostream>
using namespace std;
int main(){
    int n,i;
    while((cin>>n) && n != 0){
        cout<<"1";
        for (i=2;i<=n;i++){
            cout<<" "<<i;
        }
        cout<<endl;
    }
}
