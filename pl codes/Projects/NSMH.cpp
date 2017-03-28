#include <iostream>
#include <algorithm>
#include<fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>

using namespace std;


class encripet
{
public:



    void en(string s)
    {


        // string s;
        //getline(cin, s);
        replace( s.begin(), s.end(), 'a', 'S' );
        replace( s.begin(), s.end(), 's', 'D' );
        replace( s.begin(), s.end(), 'd', 'F' );
        replace( s.begin(), s.end(), 'f', 'G' );
        replace( s.begin(), s.end(), 'g', 'H' );
        replace( s.begin(), s.end(), 'h', 'J' );
        replace( s.begin(), s.end(), 'j', 'K' );
        replace( s.begin(), s.end(), 'k', 'L' );
        replace( s.begin(), s.end(), 'l', 'A' );
        replace( s.begin(), s.end(), 'q', 'W' );
        replace( s.begin(), s.end(), 'w', 'E' );
        replace( s.begin(), s.end(), 'e', 'R' );
        replace( s.begin(), s.end(), 'r', 'T' );
        replace( s.begin(), s.end(), 't', 'Y' );
        replace( s.begin(), s.end(), 'y', 'U' );
        replace( s.begin(), s.end(), 'u', 'I' );
        replace( s.begin(), s.end(), 'i', 'O' );
        replace( s.begin(), s.end(), 'o', 'P' );
        replace( s.begin(), s.end(), 'p', 'Q' );
        replace( s.begin(), s.end(), 'z', 'X' );
        replace( s.begin(), s.end(), 'X', 'C' );
        replace( s.begin(), s.end(), 'c', 'V' );
        replace( s.begin(), s.end(), 'v', 'B' );
        replace( s.begin(), s.end(), 'b', 'N' );
        replace( s.begin(), s.end(), 'n', 'M' );
        replace( s.begin(), s.end(), 'm', 'Z' );
        replace( s.begin(), s.end(), ' ', '?' );
        replace( s.begin(), s.end(), '0', '`' );
        replace( s.begin(), s.end(), '1', '!' );
        replace( s.begin(), s.end(), '2', '@' );
        replace( s.begin(), s.end(), '3', '#' );
        replace( s.begin(), s.end(), '4', '$' );
        replace( s.begin(), s.end(), '5', '%' );
        replace( s.begin(), s.end(), '6', '^' );
        replace( s.begin(), s.end(), '7', '&' );
        replace( s.begin(), s.end(), '8', '*' );
        replace( s.begin(), s.end(), '9', '.' );
        cout<<"Encrypted message : "<<s<<endl;
        cout<<"Do you want a text file of your encrypted data ?"<<endl;
        string yn;
        getline(cin, yn);
        if (yn=="yes")
        {
           ofstream fout("Encrypteddata.txt");
          fout<<s;
          cout<<"your file is ready & file name is encryptdata.txt "<<endl;

        }
        else
        {

        }


    }

};

class decripet
{
public:

    string sa;




    void ko(string sa)
    {
        replace( sa.begin(), sa.end(), 'S', 'a' );
        replace( sa.begin(), sa.end(), 'D', 's' );
        replace( sa.begin(), sa.end(), 'F', 'd' );
        replace( sa.begin(), sa.end(), 'G', 'f' );
        replace( sa.begin(), sa.end(), 'H', 'g' );
        replace( sa.begin(), sa.end(), 'J', 'h' );
        replace( sa.begin(), sa.end(), 'K', 'j' );
        replace( sa.begin(), sa.end(), 'L', 'k' );
        replace( sa.begin(), sa.end(), 'A', 'l' );
        replace( sa.begin(), sa.end(), 'W', 'q' );
        replace( sa.begin(), sa.end(), 'E', 'w' );
        replace( sa.begin(), sa.end(), 'R', 'e' );
        replace( sa.begin(), sa.end(), 'T', 'r' );
        replace( sa.begin(), sa.end(), 'Y', 't' );
        replace( sa.begin(), sa.end(), 'U', 'y' );
        replace( sa.begin(), sa.end(), 'I', 'u' );
        replace( sa.begin(), sa.end(), 'O', 'i' );
        replace( sa.begin(), sa.end(), 'P', 'o' );
        replace( sa.begin(), sa.end(), 'Q', 'p' );
        replace( sa.begin(), sa.end(), 'X', 'z' );
        replace( sa.begin(), sa.end(), 'C', 'x' );
        replace( sa.begin(), sa.end(), 'V', 'c' );
        replace( sa.begin(), sa.end(), 'B', 'v' );
        replace( sa.begin(), sa.end(), 'N', 'b' );
        replace( sa.begin(), sa.end(), 'M', 'n' );
        replace( sa.begin(), sa.end(), 'Z', 'm' );
        replace( sa.begin(), sa.end(), '?', ' ' );
        replace( sa.begin(), sa.end(), '`', '0' );
        replace( sa.begin(), sa.end(), '!', '1' );
        replace( sa.begin(), sa.end(), '@', '2' );
        replace( sa.begin(), sa.end(), '#', '3' );
        replace( sa.begin(), sa.end(), '$', '4' );
        replace( sa.begin(), sa.end(), '%', '5' );
        replace( sa.begin(), sa.end(), '^', '6' );
        replace( sa.begin(), sa.end(), '&', '7' );
        replace( sa.begin(), sa.end(), '*', '8' );
        replace( sa.begin(), sa.end(), '.', '9' );
        cout<<endl<<"Decrypted message :"<<sa<<endl
            <<"----------------------------------------------------------------"
            <<endl<<"----------------------------------------------------------------"<<endl;
            cout<<"Do you want a text file of your Decrypted data ?"<<endl;
        string yn;
        getline(cin, yn);
        if (yn=="yes")
        {
           ofstream fout("decrypteddata.txt");
          fout<<sa;
          cout<<"your file is ready & file name is decryptdata.txt "<<endl;

        }
        else
        {

        }

    }


};
int main()
{
    encripet e;


    decripet d;
    //cin>>d.sa;





    while(1)
    {
        cout<<"********************************************************************"<<endl;
        cout<<"**                    TEXT ENCRYPTOR v1.0                         **"<<endl;
        cout<<"**    Enter your choice                                           **"<<endl;
        cout<<"**    Encrypt >> en                                               **"<<endl;
        cout<<"**    DEcrypt >> de                                               **"<<endl;
        cout<<"**                          Quit                                  **"<<endl;
        cout<<"********************************************************************"<<endl;
        string s1,s2,s3;

        getline(cin,s1);
        if(s1=="en")
        {
            system("cls");
            while(1)
            {
                cout<< "----------------------------------------------------------------";
                cout<<endl<<"Encryption Menu                                                 | "<<endl;
                cout<<endl<<"press 1 for Encrypt from file                                   | "<<endl;
                cout<<"press 2 for Encrypt from console                                |"<<endl;
                cout<<"press 3 to go to main menu                                      |"<<endl;
                cout<<"press 4 to quit                                                 |"<<endl;
                cout<<"----------------------------------------------------------------"<<endl;
                string in;
                getline(cin,in);
                system("cls");
                if(in=="1")
                {
                    ifstream input("data.txt");
                    string s;
                    if (input.is_open())
                    {
                        while ( getline (input,s) )
                        {}
                        input.close();
                    }
                    else cout << " ERROR Unable to open file"<<endl;

                    //cout<<s<<endl;

                    e.en(s);

                }

                else if(in=="2")
                {
                    string se;
                    cout<<" Input Your Text ";
                    getline(cin,se);
                    e.en(se);
                }
                else if(in=="3")
                {
                    break;
                }
                else if(in=="4")
                {
                    exit(1);
                }
                else
                {
                    cout<<"wrong choice !! please input again"<<endl<<" "<<endl;
                }
            }
        }
        else if(s1=="de")
        {



            system("cls");
            while(1)
            {
                cout<<endl<<"Decryption Menu "<<endl;
                cout<<endl<<"press 1 for Decrypt from file "<<endl;
                cout<<"press 2 for Decrypt from console"<<endl;
                cout<<"press 3 to go to main menu"<<endl;
                cout<<"press 4 to quit"<<endl;
                string in;
                getline(cin,in);
                system("cls");
                if(in=="1")
                {

                    ifstream inputde("dedata.txt");
                    string sa;
                    if (inputde.is_open())
                    {
                        while ( getline (inputde,sa) )
                        {}
                        inputde.close();
                    }
                    else cout << "Unable to open file"<<"Tips : create your textfile as dedata.txt "<<endl;

                    cout<<"Encrypted message from file : "<<sa<<endl;
                    d.ko(sa);


               }

                else if(in=="2")
                {
                    string saa;
                    cout<<" Input Your Text ";
                    getline(cin,saa);
                    d.ko(saa);


                }
                else if(in=="3")
                {
                    break;
                }
                else if(in=="4")
                {
                    exit(1);
                }
                else
                {
                    cout<<"wrong choice !! please input again"<<endl<<" "<<endl;
                }
            }

        }

        else if(s1=="quit")
        {
            system("cls");
            cout<<"thank you for using Encryptor V 1.0 "<<endl;
            break;

        }
        else
        {
            system("cls");
            cout<<"wrong command !! please try again with right command"<<endl<<" "<<endl;;
            continue;
        }

    }

    return 0;
}

