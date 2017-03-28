#include<iostream>
using namespace std;
int main()
{
    int s,e,x=0;
    cin>>s>>e;

        x = e-s;
    if (e-s < 0)
        x = 24+e-s;
    if (e==s)
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    else
        cout<<"O JOGO DUROU "<<x<<" HORA(S)"<<endl;
}
