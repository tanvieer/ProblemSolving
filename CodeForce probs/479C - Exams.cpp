#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;

#define ll long long
#define ull unsigned long long
#define fst first
#define snd second

int n;
pair < int, int> a[5003];

int main()
{
	cin >> n;
	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		a[i] = make_pair(x, y);
	}

	sort(a, a + n);

	int cur = -1;

	for (int i = 0; i < n; i++)
	{
		if (cur <= a[i].snd) cur = a[i].snd;
		else cur = a[i].fst;
	}

	cout << cur;
	return 0;
}
