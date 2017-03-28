#include<iostream>
using namespace std;
int main()
{
    int n,c;
    float a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        c=0;
        while(1)
        {
            if(a<=1)
                break;
            else
            {
            a=a/2;
            c++;
            }
        }
        cout<<c<<" dias"<<endl;
    }
}
