#include<iostream>
using namespace std;
int main(){
    int n = -1;
    float i;
    while (1){
        n++;
        if(n>99)
            break;
        cin>>i;
        if(i<=10){
           cout<<"A["<<n<<"] = " <<i<<endl;
        }
    }
}
