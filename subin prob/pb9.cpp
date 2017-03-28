#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i;
    int d[5];
    float sum=0;
    cin>>a;
    for(i=0;i<a;i++){
        for(c=0;c<5;c++){
            cin>>d[c];
        }
        for(c=0;c<5;c++){
            sum=sum+d[c];
        }
        cout<<sum/5<<endl;
        sum=0;


    }

}
