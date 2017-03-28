#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int price,quality;
	cin>>n;
	while(n--){
    cin>>price>>quality;
    if(price<quality)
    {
      cout<<"Happy Alex"<<endl;
      return 0;
    }
	}
	cout<<"Poor Alex"<<endl;
}
