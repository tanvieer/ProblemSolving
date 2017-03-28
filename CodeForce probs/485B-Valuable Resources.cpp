#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, y, xmin, ymin, xmax, ymax,i;
    unsigned long long s;
    cin >> n;
    cin >> xmin >> ymin;
    xmax = xmin;
    ymax = ymin;
    for (i=1; i<n; i++)
    {
        cin >> x >> y;
        xmin = min(x, xmin);
        xmax = max(x, xmax);
        ymin = min(y, ymin);
        ymax = max(y, ymax);
    }
     s = max(xmax-xmin, ymax-ymin);
    cout << s*s;


    return 0;
}
