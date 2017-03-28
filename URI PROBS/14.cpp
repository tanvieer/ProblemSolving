/*
                                               Consumption

Calculate the average consumption of a car given the total distance traveled (in Km) and the total spent fuel (in liters).
Input

The input file contains two numbers: the first one is an integer X which represents the total distance (in Km) and the second one is an floating-point number Y  which represents the among of spent fuel by the car.
Output

Print the result which represents the medium of the car comsumptiom with 3 digits after the decimal point, followed by the message "km/l".
Sample Input 	Sample Output

500
35               14.286 km/l


*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X;
    float Y;
    cin>>X>>Y;
    cout<<fixed<<setprecision(3)<<X/Y<<" km/l"<<endl;
}












