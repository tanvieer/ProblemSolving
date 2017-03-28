#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c, d, r, num, den, num_r, den_r, j;
    char o, i;

    cin>>n;
    while(n--){
        cin>>a>>i>>b>>o>>c>>i>>d;
        if (o == '+'){
            num = (b * d) * a / b + (b * d) * c / d;
            den = b * d;
        } else if (o == '-'){
            num = (b * d) * a / b - (b * d) * c / d;
            den = b * d;
        } else if (o == '*'){
            num = a * c;
            den = b * d;
        } else {
            num = a * d;
            den = b * c;
        }

        if (abs(num) < abs(den))
            r = abs(num);
        else
            r = abs(den);

        num_r = num;
        den_r = den;

        j = 2;
        while (j <= r){
            if (num_r % j == 0 && den_r % j == 0){
                num_r = num_r / j;
                den_r = den_r / j;
            } else {
                j++;
            }
        }

        cout<<num<<"/"<<den<<" = "<<num_r<<"/"<<den_r<<endl;
    }
    return 0;
}
