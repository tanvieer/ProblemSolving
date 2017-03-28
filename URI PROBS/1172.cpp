#include <iostream>
using namespace std;
int main(){
    int n,i;
    for (i=0;i<=9;i++){
        cin>>n;
        if (n>0)
            cout<<"X["<<i<<"] = "<<n<<endl;
        else
            cout<<"X["<<i<<"] = 1"<<endl;
    }
}
