#include <iostream>
#include <vector>
#define M 1000000

using namespace std;

bool marked[M];   //Globally declared bool array is initialized with false

vector <int> v;

void sieve (int n)
{
    for (int i=2; i<=n; i++)
    {
        if (marked[i] == false)
        { // i is a prime
            v.push_back(i);
            for (int j = i+i; j<=n; j+=i)
                marked[j] = true;
        }
    }
}

bool isPrime (int n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
        return marked[n] == false;
}

int main()
{
        int n,k,c=0;
         cin>>n>>k;
         sieve(n);
         for(int i=0; i<v.size(); i++)
         {
             int p=v[i]+v[i+1]+1;

             if(isPrime(p)==true && p<=n)
                c++;
         }

         if(c>=k)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;


     return 0;
}
