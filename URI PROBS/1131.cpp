#include<iostream>
using namespace std;
int main(){
    int g,i,gv=0,iv=0,e=0,n=0,r;
    do {
        cin>>i>>g;
        n++;
        if(i==g)
            e++;
        if(i>g)
            iv++;
        else
            gv++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    } while ((cin>>r) && r == 1);
    cout<<n<<" grenais"<<endl;
    cout<<"Inter:"<<iv<<endl;
    cout<<"Gremio:"<<gv<<endl;
    cout<<"Empates:"<<e<<endl;
    if (iv > gv)
        cout<<"Inter venceu mais"<<endl;
    else if (gv > iv)
        cout<<"Gremio venceu mais"<<endl;
    else
        cout<<"Nao houve vencedor"<<endl;
}
