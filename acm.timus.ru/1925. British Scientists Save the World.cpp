#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    vector<pair<int,int>>v;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    int sum1=k-(n+1)*2;

    int sum2=0;

    for(int j=0; j<v.size(); j++)
    {
        sum1+=v[j].first;
        sum2+=v[j].second;
    }

    if(sum1-sum2<0)
        cout<<"Big Bang!"<<endl;
    else
        cout<<sum1-sum2<<endl;

    return 0;
}
