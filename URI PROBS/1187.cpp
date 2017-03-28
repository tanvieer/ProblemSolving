#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main(){
    cout.precision(2);
    char o;
    int i, j, l = 1;
    double s = 0, n;
    cin>>o;
    for(i=0;i<=4;i++){
        for (j=0;j<=11;j++){
            cin>>n;
            if (j>=l && j<=11-l)
                s += n;
        }
        l++;
    }
    if (o == 'S')
        cout<<fixed<<s<<endl;
    else
        cout<<fixed<<s/30<<endl;
}
