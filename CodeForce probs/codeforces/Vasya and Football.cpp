#include <bits/stdc++.h>
using namespace std;
bool h[100];
bool a[100];
int main()
{
    string hte;
    string ate;

    cin>>hte>>ate;

    int n;
    cin>>n;

    while(n--)
    {
        int time,jnum;
        char stat,card;

        cin>>time;
        cin.ignore();
        cin>>stat;
        cin>>jnum;
        cin.ignore();
        cin>>card;

        if(stat=='h' && h[jnum]==true)
            cout<<hte<<" "<<jnum<<" "<<time<<endl;
        else if(stat=='a' && a[jnum]==true)
            cout<<ate<<" "<<jnum<<" "<<time<<endl;
        else if(stat=='h' && card=='r')
            cout<<hte<<" "<<jnum<<" "<<time<<endl;
        else if(stat=='a' && card=='r')
            cout<<ate<<" "<<jnum<<" "<<time<<endl;

        if(stat=='h' && card=='y')
            h[jnum]=true;
        else if(stat=='a' && card=='y')
            a[jnum]=true;
    }
    return 0;
 }
