#include<iostream>
using namespace std;
int main(){
    int x,s=0,z,n=0;
    cin>>x;
    while((cin>>z) && z<=x) ;

    for (int i=x;s<=z;i++){
        s += x++;
        n++;
    }
    cout<<n<<endl;
}
