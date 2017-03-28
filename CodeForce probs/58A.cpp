#include<bits/stdc++.h>
using namespace std;
int main() {
   char A[] = "hello", B[100];
   int c = 0,i,len;
	  while(cin>>B){
            len=strlen(B);
	for (i=0;i<len;i++)
        {
		 if (A[c] == B[i])
		     c++;
	    }
    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	c=0;
	}
	return 0;
}
