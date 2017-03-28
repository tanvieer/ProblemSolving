#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

char arr[9]={'1','2','3','4','5','6','7','8','9'};

void shape()
{
    system("cls");
    cout<<endl<<endl;
    cout<<"   "<<arr[0]<<"  "<<(char)179<<" "<<arr[1] <<"  "<<(char)179<<" "<<arr[2]<<endl;
    cout<<"   "<<"___"<<(char)179<<"____"<<(char)179<<"___"<<endl;
    cout<<"   "<<arr[3]<<"  "<<(char)179<<" "<<arr[4] <<"  "<<(char)179<<" "<<arr[5]<<endl;
    cout<<"   "<<"___"<<(char)179<<"____"<<(char)179<<"___"<<endl;
    cout<<"   "<<arr[6]<<"  "<<(char)179<<" "<<arr[7] <<"  "<<(char)179<<" "<<arr[8]<<endl;
    cout<<"   "<<"   "<<(char)179<<"    "<<(char)179<<"  "<<endl<<endl<<endl;
}



int result()
{
	if (arr[0] == arr[1] && arr[1] == arr[2])
		return 1;
	else if (arr[3] == arr[4] && arr[4] == arr[5])
		return 1;
	else if (arr[6] == arr[7] && arr[7] == arr[8])
		return 1;
	else if (arr[0] == arr[3] && arr[3] == arr[6])
		return 1;
	else if (arr[1] == arr[4] && arr[4] == arr[7])
		return 1;
	else if (arr[2] == arr[5] && arr[5] == arr[8])
		return 1;
	else if (arr[0] == arr[4] && arr[4] == arr[8])
		return 1;
	else if (arr[2] == arr[4] && arr[4] == arr[6])
		return 1;
	else if (arr[0] != '1' && arr[1] != '2' && arr[2] != '3' &&
          arr[3] != '4' && arr[4] != '5' && arr[5] != '6' &&
            arr[6] != '7' && arr[7] != '8' && arr[8] != '9')
		return 0;
	else
		return 2;
}

int main()
{

    int player = 1,i;
    char choice;
    char cross;
    do
    {
        shape();
        if(player%2)
            player=1;
        else
            player=2;

            cout<<" Player  "<<player <<" : ";
            choice=getch()-'0';

            if(player==1)
                cross='X';
            else
                cross='O';
            if(choice == 1  && arr[0]=='1')
               arr[0]=cross;
            else if(choice == 2  && arr[1]=='2')
               arr[1]=cross;
            else if(choice == 3  && arr[2]=='3')
               arr[2]=cross;
            else if(choice == 4  && arr[3]=='4')
               arr[3]=cross;
            else if(choice == 5  && arr[4]=='5')
               arr[4]=cross;
            else if(choice == 6  && arr[5]=='6')
               arr[5]=cross;
            else if(choice == 7  && arr[6]=='7')
               arr[6]=cross;
            else if(choice == 8  && arr[7]=='8')
               arr[7]=cross;
            else if(choice == 9  && arr[8]=='9')
               arr[8]=cross;
            else
            {
			cout<<"***** Invalid move *****";
			player--;
			getch();
            }
            i=result();
		player++;
	}while(i==2);

	shape();
	if(i==1)
		cout<<"***** Player "<<--player<<" win *****";
	else
		cout<<"***** Game draw *****";
	getch();





    return 0;
}
