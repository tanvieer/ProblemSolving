#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,p=0,i;
   string a;
   cin>>n;
   cin.ignore();
   while(n--){
    getline(cin,a);

    for(i = 0 ; i<a.length();i++){
        if(a[i]=='1'){
            p=p+2;
        }
        else if(a[i]=='2'){
            p=p+5;
        }
        else if(a[i]=='3'){
            p=p+5;
        }
        else if(a[i]=='4'){
            p=p+4;
        }
        else if(a[i]=='5'){
            p=p+5;
        }
        else if(a[i]=='6'){
            p=p+6;
        }
        else if(a[i]=='7'){
            p=p+3;
        }
        else if(a[i]=='8'){
            p=p+7;
        }
        else if(a[i]=='9'){
            p=p+6;
        }
        else if(a[i]=='0'){
            p=p+6;
        }
    }
    cout<<p<<" leds"<<endl;
    p=0;
   }

    return 0;
}
