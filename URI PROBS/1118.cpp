#include <iostream>
#include<iomanip>
using namespace std;


int main(){
    int r, c;
    float n, s;
cout.precision(2);
    do {
        c=0;
        s=0.0;
        while (c < 2){
            cin>>n;
            if (n>=0.0 && n<=10.0){
                s += n;
                c++;
            } else {
                cout<<"nota invalida"<<endl;
            }
        }
        cout<<"media = "<<fixed<<s/2.0<<endl;
        do {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin >> r;
        } while (r!=1 && r!=2);
    } while(r!=2 );
}
