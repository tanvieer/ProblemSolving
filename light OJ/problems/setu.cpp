#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main ()
{
    int t,n,s=0,d=0;
    char a [100];
    cin>>n;
    for(int i=1;i<=n;i++){
    s=0;
    cin>>t;
    cout<<"Case "<<i<<":"<<endl;
    while (t--)
     {
        scanf ("%s", a);
        if (strcmp (a, "donate")==0)
        {
            scanf ("%d", &d);
            s += d;
        }
        else{
        cout<<s<<endl;
        }
    }
}
    return 0;

}
