#include<iostream>
using namespace std;
int main(){
    int x,y,a;
    cin >>x;
    cin >>y;

    if (x>y){
        a=x;
        x=y;
        y=a;
    }

    for (int i=x+1;i<y;i++){
        if (i%5==2 || i%5==3)
            cout <<i<<endl;
    }
}
