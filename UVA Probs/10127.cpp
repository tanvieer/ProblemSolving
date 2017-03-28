#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        int nDigits = 0, temp = 0;
        do {
            temp = (temp * 10 + 1) % n;
            nDigits++;
        } while (temp % n != 0);
        cout << nDigits << endl;
    }
}
