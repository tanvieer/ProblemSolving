#include<iostream>
using namespace std;
int main(){
    int i=1,j=7;
    while (i<=9){
        cout<<"I="<<i<<" J="<<j--<<endl;
        cout<<"I="<<i<<" J="<<j--<<endl;
        cout<<"I="<<i<<" J="<<j--<<endl;
        i += 2;
        j += 5;
    }
}
