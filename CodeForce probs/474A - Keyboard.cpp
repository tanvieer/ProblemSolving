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
const string line1 = "qwertyuiop";
const string line2 = "asdfghjkl;";
const string line3 = "zxcvbnm,./";

#define ll long long
#define ull Unsigned long long
#define fst first
#define snd second

int main()
{
	char c;
	cin >> c;
	int delta = 0;
	if (c == 'R') delta = -1;
	else delta = 1;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		int pos = line1.find(s[i]);
		if (line1[pos] == s[i]) cout << line1[pos + delta];
		else
		{
			pos = line2.find(s[i]);
			if (line2[pos] == s[i]) cout << line2[pos + delta];
			else
			{
				pos = line3.find(s[i]);
				cout << line3[pos + delta];
			}
		}
	}
	return 0;
}
