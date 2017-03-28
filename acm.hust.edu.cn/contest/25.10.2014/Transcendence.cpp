#include <iostream>
#include <cmath>
using namespace std;

int prime(int a){
    int t=0;
    for(int j=1;j<=a;j++){
        int flag=1;
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0)
            flag=0;
        }
        if(flag==1 && a!=1)
            t++;

    }
    return t;
}

int main()
{
    int a,s=0;
    cin>>a;
    for(int i=2;i<=a;i++){
        if(a%i==0)
           s= s+prime(i);
    }
cout<<s<<endl;;
}
