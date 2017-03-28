#include <iostream>
using namespace std;
int main(){
    int n,i;

    cin>>n;
    if (n%2== 0)
        n++;
    for (i=0;i<=5;i++,n+=2)
        cout<<n<<endl;
}
