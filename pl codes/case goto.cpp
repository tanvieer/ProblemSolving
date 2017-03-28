#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
main()
{
    start:
    cout<<"*******Welcome to Raihan Travles....We were just waiting for you*************"<<endl<<endl;
    cout<<"Here is your choices "<<endl<<endl;
    cout<<"Select 1 for Bus ticket"<<endl;
    cout<<"Select 2 for Train ticket"<<endl;
    cout<<"Select 3 for Air ticket"<<endl;
    int i;
    string h;

    cin>>i;

    switch(i)
    {
    case 1:
        cout<<"Welcome to our bus ticket counter"<<endl;
        cout<<"if you want to go back, please type <back> \nor if you want to quit, please type <quit>\n==>";
        cin>>h;
        if(h=="back")
        {
            system("cls");
            goto start;
        }
        else if(h=="exit")
        {
            break;
        }
        break;
    case 2:
        cout<<"Welcome to our train ticket counter"<<endl;
        break;
    case 3:
        cout<<"Welcome to our air ticket counter"<<endl;
        break;

    }

}

