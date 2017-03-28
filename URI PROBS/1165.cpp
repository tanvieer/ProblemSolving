#include<iostream>
using namespace std;
int prime(int n)
{
    for (int i=2;i<n;i++)
        {
            if(n%i==0)
            return 1;
        }
      return 2;
}
int main()
{
    int n,t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n==2 || n==3)
            cout<<n<<" eh primo"<<endl;
        else if(n<2)
            cout<<n<<" nao eh primo"<<endl;
        else if(prime(n)==2)
            cout<<n<<" eh primo"<<endl;
        else
            cout<<n<<" nao eh primo"<<endl;
    }
}
