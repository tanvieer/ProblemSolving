#include <iostream>
using namespace std;

int main(){
    int x,s=0;

    while ((cin>>x) && x!=0){
        s=0;

        if (x%2 !=0)
            x++;
        for (int i =0;i<=4; i++,x+=2)
            s +=x;

        cout<<s<<endl;
    }
}
