#include <iostream>
using namespace std;
int main(){
    int c,n,m,im=0,i=0;
    cin>>c;
    cin>>n;
    c--;
    m=n;
    while(c--){
        i++;
        cin>>n;
        if(n<m){
            im=i;
            m=n;
        }
    }
    cout<<"Menor valor: "<<m<<endl;
    cout<<"Posicao: "<<im<<endl;
}
