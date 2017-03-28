#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    string bin;
    char holder=' ';
    cin>>number;
    while(number!=0)
    {
        holder=number%2+'0';
        bin=holder+bin;
        number/=2;
    }
    cout<<bin;
    return 0;
}
