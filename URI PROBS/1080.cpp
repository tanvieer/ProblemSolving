#include<iostream>
using namespace std;
int main(){
    int n, q = 0, g = -1, i = -1;
    while(++q && q <= 100){
        cin>>n;
        if (n > g){
            g = n; i = q;
        }

    }
    cout<<g<<endl;
    cout<<i<<endl;
}
