#include <iostream>
using namespace std;
int main()
{
    int col,i,space,star,T,j;
    cin>>T;
    cout<<endl;
    for(j=0;j<T;j++)
    {
    cout<<endl;
    cin>>col;
    for(i=0;i<col;i++)
    {   cout<<endl;
        for(space=0;space<col-i;space++)
        {
            cout<<" ";
        }
        for(star=0;star<=2*(col-space);star++)
{
            cout<<"*";
}}}}
