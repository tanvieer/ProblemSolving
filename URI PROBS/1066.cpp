#include<iostream>
using namespace std;
int main()
{
    int a,e=0,o=0,p=0,n=0,i;
    for(i=0;i<5;i++)
    {
        cin>>a;
        if(a>0)
            p++;
        else if(a<0)
            n++;
        if(a%2==0)
            e++;
        else
            o++;
    }
    cout<<e<<" valor(es) par(es)"<<endl;
    cout<<o<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<n<<" valor(es) negativo(s)"<<endl;
}

