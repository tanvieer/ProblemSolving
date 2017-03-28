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

int c, sum;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> c;
		sum += c;
	}
	if (sum % 5) cout << - 1 << endl;
	else
	{
		sum /= 5;
		if (sum > 0) cout << sum << endl;
		else cout << - 1 << endl;
	}
	return 0;
}
