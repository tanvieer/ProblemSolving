#include <iostream>
using namespace std;


int countDivisor(int n) {
  int divisor = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      divisor++;
    }
  }
  return divisor;
}
int countdivisor(int n) {
  int divisor = 0;
  for (int i = 1; i * i <= n; i++) {
    if (i * i == n) {
      divisor += 1;
    } else if (n % i == 0) {
      divisor += 2;
    }
  }
  return divisor;
}


void whosprime(long long x)
{
    bool imPrime = true;

    for(int i = 1; i <= x; i++)
    {
        for(int z = 2; z <= x; z++)
        {
            if((i != z) && (i%z == 0))
            {
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
    cout<<"\n\n"<<countDivisor(r)<<endl;
     cout<<countdivisor(r)<<endl;
}
