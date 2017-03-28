#include <iostream>
#include <cmath>
//it is also accepted to give #include <math.h>//
using namespace std;

int isprime(int num)
{
    int flag = 0;

    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==0 && num >1)
        return 1;
}

int main()
{
    int n;

    cin>>n;

    while(n--)
    {
        int arr[10];
        int count=0;

        for(int i=0; i<10; i++)
        {
            cin>>arr[i];

            if(isprime(arr[i])==1)
                count++;
        }

        cout<<count<<endl;
    }


    return 0;
}
