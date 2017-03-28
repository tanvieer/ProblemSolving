#include<iostream>
using namespace std;
int main(){
    int d[] = {100, 50, 20, 10, 5, 2, 1};
    int n;

    cin>>n;
    cout<<n<<endl;
    for(int i=0;i<7;i++){
        cout<<n/d[i]<<" nota(s) de R$ "<<d[i]<<",00"<<endl;
        if (n >= d[i])
            n -= d[i] * (n / d[i]);
    }
}
