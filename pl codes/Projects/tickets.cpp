#include <bits/stdc++.h>
#include <conio.h>
#include<windows.h>
#define red {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=12);}
using namespace std;
class travels
{
public:
    string name,route;
    int rate,seat;
    virtual void show() = 0;
};
class train: public travels
{
public:
    train(string a, string b, int c,int d)
    {
        name=a;
        route=b;
        rate=c;
        seat=d;
    }
    void show()
    {
        cout<<"Train Name :- "<<name<<endl;
        cout<<"Route :- "<<route<<endl;
        cout<<"Ticket Price :- "<<rate<<endl;
        cout<<"Seats availabe :- "<<seat<<endl;
    }
};

class bus : public travels
{
public:
    bus(string a, string b, int c,int d)
    {
        name=a;
        route=b;
        rate=c;
        seat=d;
    }
    void show()
    {
        cout<<"Bus Company Name :- "<<name<<endl;
        cout<<"Route :- "<<route<<endl;
        cout<<"Ticket Price :- "<<rate<<endl;
        cout<<"Seats availabe :- "<<seat<<endl;
    }

};

class air : public travels
{
public:
    air(string a, string b, int c,int d)
    {
        name=a;
        route=b;
        rate=c;
        seat=d;
    }
    void show()
    {
        cout<<"Airlines Name :- "<<name<<endl;
        cout<<"Route :- "<<route<<endl;
        cout<<"Ticket Price :- "<<rate<<endl;
        cout<<"Seats availabe :- "<<seat<<endl;
    }

};

int main()
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k,pay,q,z;
    char i,l,tr;
    string j;
     train t[5]=
    {
        train("Silk city express","Dhaka-rajshahi",500,300),
        train("Lalmoni express","Dhaka-Lalmonirhat",300,100),
        train("Druto Jan express","Dhaka-Dinajpur",600,200),
        train("Shirajganj express","Dhaka-Shirajganj",200,300),
        train("Chittagong express","Dhaka-Chittagong",600,300)
    };

    main1:
    cout<<"Press 1 for Train Ticket.\nPress 2 for Bus Ticket\nPress 3 for Air Ticket.\n==>";
    tr=getch()-'0';
    switch(tr)
    {
    case 1:

    cout<<endl;

    cout<<"For buying ticket, please type > ok < or enter enter any key for exit.\n==> ";
    cin>>j;
    if(j=="ok")
    start:
    {
        system("cls");
        cout<<"\t**************Welcome to our Train ticket counter**************"<<endl<<endl;
        cout<<"Press 1 for Dhaka-Raj Ticket."<<endl;
        cout<<"Press 2 for Dhaka-Lalmoni Ticket."<<endl;
        cout<<"Press 3 for Dhaka-Dnj Ticket."<<endl;
        cout<<"Press 4 for Dhaka-Shir Ticket."<<endl;
        cout<<"Press 5 for Dhaka-Ctg Ticket."<<endl;
        cout<<"Press 6 to go back to main menu."<<endl<<endl;
        i=getch();
        switch(i-'0')
        {
        case 1:
            cout<<endl;
            t[0].show();
            cout<<endl;
            cout<<"Enter the number of tickets you wan to borrow (maximum 4 at a time) \n==> ";
            cin>>k;
            if(k==1)
            {
                t[0].seat=t[0].seat-1;
            }
            else if(k==2)
            {
                t[0].seat=t[0].seat-2;
            }
            else if(k==3)
            {
                t[0].seat=t[0].seat-3;
            }
            else if(k==4)
            {
                t[0].seat=t[0].seat-4;
            }
            cout<<endl;
            cout<<"Please pay tk 500 per ticket.\n==>";
            pay1:
            cin>>pay;
            if( k==1 && pay==500)
            {
                cout<<endl;
                cout<<"Congrats..you bought a ticket for Dhaka to Rajshahi."<<endl;
            }
            else if( k==2 && pay==1000)
            {
                cout<<endl;
                cout<<"Congrats..you bought two tickets for Dhaka to Rajshahi."<<endl;
            }
            else if( k==3 && pay==1500)
            {
                cout<<endl;
                cout<<"Congrats..you bought three tickets for Dhaka to Rajshahi."<<endl;
            }
            else if( k==4 && pay==2000)
            {
                cout<<endl;
                cout<<"Congrats..you bought four tickets for Dhaka to Rajshahi."<<endl;
            }

            else
            {
                //system("cls");
                cout<<"Sorry...your purchasing is not completed."<<endl<<endl;
                cout<<"Please pay exact "<<k*500<<"tk for successful purchasing \n==>";
                goto pay1;
            }

            cout<<endl;
            cout<<"Press 1 to go back to the previous page or press any key to exit\n==>";
            l=getch();
            l-='0';
            if(l==1)
            {
                system("cls");
                goto start;
            }
            else
            {
                cout<<endl;
                cout<<"\tThanks for doing business with us. Have a nice day."<<endl;
                break;
            }
            break;


        case 2:

            cout<<endl;
            t[1].show();
            cout<<endl;
            cout<<"Enter the number of tickets you wan to borrow (maximum 4 at a time) \n==> ";
            cin>>k;
            if(k==1)
            {
                t[1].seat=t[1].seat-1;
            }
            else if(k==2)
            {
                t[1].seat=t[1].seat-2;
            }
            else if(k==3)
            {
                t[1].seat=t[1].seat-3;
            }
            else if(k==4)
            {
                t[1].seat=t[1].seat-4;
            }

            cout<<"Please pay tk 300 per ticket\n==> ";
            pay2:
            cin>>pay;
            if( k==1 && pay==300)
            {
                cout<<endl;
                cout<<"Congrats..you bought a ticket for Dhaka to Lalmonirhat."<<endl;
            }
            else if( k==2 && pay==600)
            {
                cout<<endl;
                cout<<"Congrats..you bought two tickets for Dhaka to Lalmonirhat."<<endl;
            }
            else if( k==3 && pay==900)
            {
                cout<<endl;
                cout<<"Congrats..you bought three tickets for Dhaka to Lalmonirhat."<<endl;
            }
            else if( k==4 && pay==1200)
            {
                cout<<endl;
                cout<<"Congrats..you bought four tickets for Dhaka to Lalmonirhat."<<endl;
            }
            else
            {
                //system("cls");
                cout<<"Sorry...your purchasing is not completed."<<endl<<endl;
                cout<<"Please pay exact "<<k*300<<"tk for successful purchasing.\n==> ";
                goto pay2;


            }
            cout<<endl;
            cout<<"Press 1 to go back to the previous page or press any key to exit.\n==>";
            l=getch()-'0';
            if(l==1)
            {
                system("cls");
                goto start;
            }
            else
            {
                cout<<endl;
                cout<<"\tThanks for doing business with us. Have a nice day."<<endl;
                break;
            }
            break;

        case 3:

            cout<<endl;
            t[2].show();
            cout<<endl;
            cout<<"Enter the number of tickets you wan to borrow (maximum 4 at a time) \n==> ";
            cin>>k;
            if(k==1)
            {
                t[2].seat=t[2].seat-1;
            }
            else if(k==2)
            {
                t[2].seat=t[2].seat-2;
            }
            else if(k==3)
            {
                t[2].seat=t[2].seat-3;
            }
            else if(k==4)
            {
                t[2].seat=t[2].seat-4;
            }

            cout<<"Please pay tk 600 per ticket.";
            pay3:
            cin>>pay;
            if( k==1 && pay==600)
            {
                cout<<endl;
                cout<<"Congrats..you bought a ticket for Dhaka to Dinajpur."<<endl;
            }
            else if( k==2 && pay==1200)
            {
                cout<<endl;
                cout<<"Congrats..you bought two tickets for Dhaka to Dinajpur."<<endl;
            }
            else if( k==3 && pay==1800)
            {
                cout<<endl;
                cout<<"Congrats..you bought three tickets for Dhaka to Dinajpur."<<endl;
            }
            else if( k==4 && pay==2400)
            {
                cout<<endl;
                cout<<"Congrats..you bought four tickets for Dhaka to Dinajpur."<<endl;
            }
            else
            {
               // system("cls");
                cout<<"Sorry...your purchasing is not completed."<<endl<<endl;
                cout<<"Please pay exact "<<k*600<<"tk for successful purchasing.\n==> ";
                goto pay3;
            }
            cout<<endl;
            cout<<"Press 1 to go back to the previous page or press any key to exit.\n==>";
            l=getch()-'0';
            if(l==1)
            {
                system("cls");
                goto start;
            }
            else
            {
                cout<<endl;
                cout<<"\tThanks for doing business with us. Have a nice day."<<endl;
                break;
            }
            break;

        case 4:

            cout<<endl;
            t[3].show();
            cout<<endl;
            cout<<"Enter the number of tickets you wan to borrow (maximum 4 at a time) \n==> ";
            cin>>k;
            if(k==1)
            {
                t[3].seat=t[3].seat-1;
            }
            else if(k==2)
            {
                t[3].seat=t[3].seat-2;
            }
            else if(k==3)
            {
                t[3].seat=t[3].seat-3;
            }
            else if(k==4)
            {
                t[3].seat=t[3].seat-4;
            }

            cout<<"Please pay tk 200 per ticket\n==> ";
            pay4:
            cin>>pay;
            if( k==1 && pay==200)
            {
                cout<<endl;
                cout<<"Congrats..you bought a ticket for Dhaka to Shirajganj."<<endl;
            }
            else if( k==2 && pay==400)
            {
                cout<<endl;
                cout<<"Congrats..you bought two tickets for Dhaka to Shirajganj."<<endl;
            }
            else if( k==3 && pay==600)
            {
                cout<<endl;
                cout<<"Congrats..you bought three tickets for Dhaka to Shirajganj."<<endl;
            }
            else if( k==4 && pay==800)
            {
                cout<<endl;
                cout<<"Congrats..you bought four tickets for Dhaka to Shirajganj."<<endl;
            }
            else
            {
               // system("cls");
                cout<<"Sorry...your purchasing is not completed.\n"<<endl;
                cout<<"Please pay exact "<<k*200<<"tk for successful purchasing.\n==> ";
                goto pay4;


            }
            cout<<endl;
            cout<<"Press 1 to go back to the previous page or press any key to exit.\n==>";
            l=getch()-'0';
            if(l==1)
            {
                system("cls");
                goto start;
            }
            else
            {
                cout<<endl;
                cout<<"\tThanks for doing business with us. Have a nice day."<<endl;
                break;
            }
            break;

        case 5:

            cout<<endl;
            t[4].show();
            cout<<endl;
            cout<<"Enter the number of tickets you wan to borrow (maximum 4 at a time) \n==> ";
            cin>>k;
            if(k==1)
            {
                t[4].seat=t[4].seat-1;
            }
            else if(k==2)
            {
                t[4].seat=t[4].seat-2;
            }
            else if(k==3)
            {
                t[4].seat=t[4].seat-3;
            }
            else if(k==4)
            {
                t[4].seat=t[4].seat-4;
            }

            cout<<"Please pay tk 600 per ticket.\n==> ";
            pay5:
            cin>>pay;
            if( k==1 && pay==600)
            {
                cout<<endl;
                cout<<"Congrats..you bought a ticket for Dhaka to Ctg."<<endl;
            }
            else if( k==2 && pay==1200)
            {
                cout<<endl;
                cout<<"Congrats..you bought two tickets for Dhaka to Ctg"<<endl;
            }
            else if( k==3 && pay==1800)
            {
                cout<<endl;
                cout<<"Congrats..you bought three tickets for Dhaka to Ctg"<<endl;
            }
            else if( k==4 && pay==2400)
            {
                cout<<endl;
                cout<<"Congrats..you bought four tickets for Dhaka to Ctg"<<endl;
            }
            else
            {
              //  system("cls");
                cout<<"Sorry...your purchasing is not completed."<<endl<<endl;
                cout<<"Please pay exact "<<k*600<<"tk for successful purchasing.\n==> ";
                goto pay5;


            }
            cout<<endl;
            cout<<"Press 1 to go back to the previous page or press any key to exit\n==>";
            l=getch()-'0';
            if(l==1)
            {
                system("cls");
                goto start;
            }
            else
            {
                cout<<endl;
                cout<<"\tThanks for doing business with us. Have a nice day."<<endl;
                break;
            }
            break;
        }

    }


    else
    {
        system("cls");
        red;cout<<"Thanks for visiting..... We hope you will come soon."<<endl;
        getch();
    }


   break;

    case 2:


break;
    case 3:


break;

}
    }

