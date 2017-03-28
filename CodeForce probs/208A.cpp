#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int a;
    cin>>s;
    a=s.find("WUB");
    while(a!=-1)
    {
     s.erase(a,3);
     if(a!=0)
       {
        s=s.insert(a," ",1);
       }
     a=s.find("WUB");
    }
    cout<<s;
    return 0;
}
