#include<iostream>
using namespace std;
int main(){
    char o;
    int i, j, c;
    float s = 0.0, n;
    cout.precision(1);
    cin>>c;
    cin>>o;
    for (i=0;i<=11;i++){
        for (j=0;j<=11;j++){
            cin>>n;
            if(i==c){
              s += n;
            }
        }
    }
    if(o=='S')
        cout<<fixed<<s<<endl;
    else
        cout<<fixed<<s/12<<endl;
}
