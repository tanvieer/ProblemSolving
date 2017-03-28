#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

ll was[111111];

int main()
{
    ll a, m, i;
    cin >> a >> m;
    i = a;
    while(i != 0)
    {
        if (was[i] > 0)
        {
            cout << "No";
            return 0;
        }
        was[i] = 1;
        i += (i%m);
        i %= m;
    }
    cout << "Yes";

    return 0;
}
