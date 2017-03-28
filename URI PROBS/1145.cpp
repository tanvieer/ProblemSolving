#include<iostream>
using namespace std;
int main(){
    int x,y,i,j;
    cin>>x>>y;
    i = 1;
    while (i<=y){
        for (j=0;j<x;j++){
            if (i>y) break;
            if (j==0)
                cout<<i++;
            else
                cout<<" "<<i++;
        }
        cout<<endl;
    }
}
