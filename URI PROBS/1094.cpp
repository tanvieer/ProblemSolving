#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    char t;
    int n, c = 0, r = 0, s = 0, count = 0, e;

    cin>>n;
    while(n--){
        cin>>e>>t;
        count += e;
        if (t == 'C'){
            c += e;
        } else if (t == 'R'){
            r += e;
        } else if (t == 'S'){
            s += e;
        }
    }

    cout<<"Total: "<<count<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<((float)c*100.0/count)<<" %"<<endl;;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<((float)r*100.0/count)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<((float)s*100.0/count)<<" %"<<endl;;
}
