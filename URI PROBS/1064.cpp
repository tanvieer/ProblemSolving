#include <iostream>
using namespace std;
int main(){
    float n,s=0;
    int p=0,i;
    for(i=0;i<6;i++)
    {
        cin>>n;
        if (n > 0){
            s += n;
            p++;
        }
    }
    cout<<p<<" valores positivos"<<endl;
    cout<<((float)s/p)<<endl;
}

