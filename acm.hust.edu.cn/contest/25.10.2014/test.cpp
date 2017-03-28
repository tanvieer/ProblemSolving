#include <iostream>
using namespace std;

void whosprime(long long x)
{
    bool imPrime = true;

    for(int i = 1; i <= x; i++)
    {
        for(int z = 2; z <= x; z++)
        {

            if((i != z) && (i%z == 0))
            {    cout<<"                   i= "<<i<<" z= "<<z<<"  i*2= "<<i*2<<endl;
                imPrime = false;
                break;
            }

        }

        if(imPrime && x%i == 0)
            cout << i << endl;

        imPrime = true;
    }
}

int main()
{
    long long r;
    cin>>r;
    whosprime(r);
}
