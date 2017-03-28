#include<iostream>
using namespace std;
int main()
{
    int x,y;
    while(1){
    cin>>x>>y;
    if(x>y)
        cout<<"Crescente"<<endl;
    else if(x==y)
        return 0;
    else
        cout<<"Decrescente"<<endl;
}}
