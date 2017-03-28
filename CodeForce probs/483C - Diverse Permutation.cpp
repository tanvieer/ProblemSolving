using namespace std;

#define ll long long
#define ull unsigned long long

int main()
{
    ll n, k, temp=1;
    bool bl = true;
    cin >> n >> k;
    for (ll i=1; i<=k; i++)
    {
        cout << temp << ' ';
        if (bl)
            temp += (k-i+1);
        else
            temp -= (k-i+1);
        bl = !bl;
    }
    cout << temp << ' ';
    for (ll i=k+2; i<=n; i++)
            cout << i << ' ';

    return 0;
}
