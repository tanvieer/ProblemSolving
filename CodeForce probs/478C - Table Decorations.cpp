
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define ld long double

ll a[3];

int main()
{
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	sort(a, a + 3);
	cout << min(a[0] + a[1], (a[0] + a[1] + a[2]) / 3);
	return 0;
}
