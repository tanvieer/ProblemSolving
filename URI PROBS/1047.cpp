#include<iostream>
using namespace std;
int main(){
    int hi,mi,hf,mf,mr,hr;
    cin>>hi>>mi>>hf>>mf;

    hr=hf-hi;
    if(hf-hi<0)
        hr=24+hf-hi;

    mr=mf-mi;
    if(mf-mi<0){
        mr=60+mf-mi;
        hr--;
    }

    if(hf==hi && mf==mi)
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    else
        cout<<"O JOGO DUROU "<<hr<<" HORA(S) E "<<mr<<" MINUTO(S)"<<endl;

}
