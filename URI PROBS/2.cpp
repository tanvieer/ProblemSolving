/*
Link =  https://www.urionlinejudge.com.br/judge/en/problems/view/1002


The area of the circle is defined as A = π . R2, having π as 3.14159.

Calculate the area using the formula given in the problem description.
Input

Read the variable R (double precision), that is the radius of the circle.
Output

Print the variable A, rounded to four decimal digits.
Sample Input 	Sample Output

   2                A=12.5664*/


#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    double A,R;
    cin>>R;
    A=(3.14159)*pow(R,2);
    cout <<fixed;
    cout<<"A="<<setprecision(4)<<A<<endl;
}


/*

import java.util.Scanner;
import java.text.*;
public class Main{
   public static void main(String[] args)
      {
         final double pi = 3.14159;
         double A,R;
         Scanner in = new Scanner(System.in);
         R = in.nextDouble();
         A=pi*(Math.pow(R,2));
         DecimalFormat df = new DecimalFormat("############.####");
         System.out.println("A="+df.format(A));
   }
}


*/
