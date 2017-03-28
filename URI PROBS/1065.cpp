#include<iostream>
using namespace std;
int main()
{
    int i=5,a,e=0;
    while(i--)
    {
        cin>>a;
        if(a%2==0)
            e++;
    }
    cout<<e<<" valores pares"<<endl;
}
