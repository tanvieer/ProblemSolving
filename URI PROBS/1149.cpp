#include <iostream>
using namespace std;
int main(){
    int a,b,s;
    cin >>a;
    s=a;
    cin>>b;
    while (b<=0)
        cin>>b;
    for (int i=1;i<b;i++)
        s +=++a;
    cout <<s<<endl;
}
