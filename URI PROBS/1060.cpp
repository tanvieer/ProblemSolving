#include <iostream>
using namespace std;
int main(){
    float n;
    int p=0,i;
    for(i=0;i<6;i++)
    {
        cin>>n;
        if (n>0)
            p++;
    }
    cout<<p<<" valores positivos"<<endl;
}
