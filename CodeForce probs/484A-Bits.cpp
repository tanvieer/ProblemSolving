#include <bits/stdc++.h>

using namespace std;

long long le[100];

int main()
{
    unsigned long long l, r, n,maxl,temp,pow2;
    long long i,j,k;
    cin >> n;
    for (j=0; j<n; j++)
    {
        cin >> l >> r;
         maxl=0;
         temp=1;
        temp = l;
        while (temp > 0)
        {
            le[maxl] = temp%2;
            temp/=2;
            maxl++;
        }
         i=0;
         pow2 = 1;
        while (true)
        {
            if (le[i] == 0)
            {
                if (l + pow2 <= r)
                    l += pow2;
                else
                {
                    break;
                }
            }
            i++;
            pow2*=2;
        }
        cout << l << endl;
        for ( k=0; k<100; k++)
            le[k] = 0;
    }
    return 0;
}
