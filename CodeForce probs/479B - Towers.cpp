#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

#define ll long long
#define ull unsigned long long

ll a[1003], b[1003][2];

int main()
{
    ll n, k, mini, maxi;
    cin >> n >> k;
    for (ll i=0; i<n; i++)
    {
        cin >> a[i];
    }

    ll i=0;
    while ((maxi-mini > 1) && (i < k))
    {
        maxi = a[0];
        mini = a[0];
        b[i][0] = b[i][1] = 0;
        for (ll j=1; j<n; j++)
        {
            if (maxi < a[j])
            {
                maxi = a[j];
                b[i][1] = j;
            }
            if (mini > a[j])
            {
                mini = a[j];
                b[i][0] = j;
            }
        }
        if (maxi-mini > 1)
        {
            a[b[i][0]]++;
            a[b[i][1]]--;
            i++;
        }
    }

    maxi = a[0];
    mini = a[0];
    for (ll j=1; j<n; j++)
    {
        maxi = max(maxi, a[j]);
        mini = min(mini, a[j]);
    }
    cout << maxi - mini << ' ' << i << endl;
    for (ll j=0; j<i; j++)
    {
        cout << b[j][1]+1 << ' ' << b[j][0]+1 << endl;
    }


    return 0;
}
