
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <cstdio>
#include <map>
#include <string>
#include <math.h>

using namespace std;

#define ll long long
#define ull Unsigned long long
#define fst first
#define snd second

const int maxn = 100003;
ll a[maxn], s[maxn];
int n, m;

int main()
{
	cin >> n;
	cin >> a[0];
	s[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}

	cin >> m;
	ll x;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		cout << (lower_bound(s, s + n, x) - s) + 1 << endl;
	}
	return 0;
}
