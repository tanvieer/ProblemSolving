
#include <iostream>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define ll long long
#define ull unsigned long long
#define fst first
#define snd second

int main()
{
	ll n, m;
	cin >> n >> m;
	ll kmin = n / m;
	ll ans = m * kmin * (kmin - 1) / 2;
	if (n % m != 0) ans += (n % m) * kmin;
	cout << ans << ' ';

	ll kmax = n - m + 1;
	cout << kmax * (kmax - 1) / 2 << ' ';
	return 0;
}
