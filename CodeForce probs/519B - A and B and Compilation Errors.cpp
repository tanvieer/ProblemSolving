#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n, a[100000], b[100000], c[100000];
    long long sa = 0, sb = 0, sc = 0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sa+=a[i];
    }
    for (int i = 0; i < n - 1; i++){
        cin>>b[i];
        sb+=b[i];
    }
    for (int i = 0; i < n - 2; i++){
        cin>>c[i];
        sc+=c[i];
    }
    cout<<sa-sb<<endl;
    cout<<sb-sc<<endl;
}
