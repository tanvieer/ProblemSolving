#include<iostream>
using namespace std;
int main(){
    int p;
    while(1){
        cin>>p;
        if (p != 2002)
            cout<<"Senha Invalida"<<endl;
        else
            break;
    }
    cout<<"Acesso Permitido"<<endl;
}
