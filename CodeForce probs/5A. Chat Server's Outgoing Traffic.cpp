#include <iostream>
#include <string>
using namespace std;
int main()
{
	int user=0,trash,len=0;
	string s;
	while(getline(cin,s,'\n'))
	{
		if(s[0]=='+')
			user++;
		else if(s[0]=='-')
			user--;

		else
		 {
		   // cout<<"user="<<user<<endl;
			   trash=s.find(':',0);
			  //cout<<"trash="<<trash<<endl;
			   len+=(s.size()-trash-1)*user;
			  // cout<<"len="<<len<<endl;
		 }
	}
		    cout<<len<<endl;


}
