#include<iostream>
using namespace std;
int main()
{
int a,big,small,i,j;
int x[5];
cin>>a;
for(j=0;j<a;j++)
{
for(i=0;i<5;i++)
{
cin>>x[i];
}
big=x[0];
small=x[0];
for(i=0;i<=4;i++)
{

if(big<x[i])
big=x[i];

if(small>x[i])
small=x[i];
}
cout<<big<<" "<<small<<endl;
}
}
