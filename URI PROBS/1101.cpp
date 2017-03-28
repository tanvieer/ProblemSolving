#include <iostream>
using namespace std;
int main()
{
   int a,b,i,s=1;
   while(s--){
    cin>>a>>b;

   if(a==0 || b==0){
   break;}
    int p=0;
    if(a>b){
   for(i=b;i<=a;i++){
    p=p+i;
    cout<<i<<" ";
   }
   cout<<"Sum="<<p<<endl;
    s++;
   }
   if(b>=a){
   for(i=a;i<=b;i++){
    p=p+i;
    cout<<i<<" ";
   }
   cout<<"Sum="<<p<<endl;
    s++;
   }
   }
}
