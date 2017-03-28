#include<iostream>
using namespace std;
int main(){
    int n,i,f,x,j,s;
    cin>>n;
    while(n--){
        cin>>i>>f;
        if (i>f)
        {
        x=i;
        i=f;
        f=x;
        }
        s=0;
        for(j=i+1;j<f;j++){
            if(j%2!=0)
                s+=j;
        }
        cout<<s<<endl;
    }
}
