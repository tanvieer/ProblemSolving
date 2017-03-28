#include<iostream>
using namespace std;
int main()
{
    int T,i;
    long long A,B;
    cin>>T;
    for(i=1;i<=T;i++)
    {


        cin>>A>>B;

        if(A==B)
            cout<<"Case "<<i<<": ="<<endl;
        else if(A>B)
            cout<<"Case "<<i<<": >"<<endl;
        else
            cout<<"Case "<<i<<": >"<<endl;
}
}
