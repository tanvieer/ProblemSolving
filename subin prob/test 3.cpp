#include<iostream>
#include<string>
using namespace std;

class number{
    string S;

public:
    int numb(string S,int num=0) {
    getline(cin,S);
    int l=S.size();
    for(int p=0;p<l;p++)
    {
        if(S[p]!=' ')
            {num++;
            if(S[p+1]!=' ')
              {p++;
               if(S[p+1]!=' ')
                 {
                  p++;
                  if(S[p+1]!=' ')
                    {
                     p++;
                     if(S[p+1]!=' ')
                       {
                        p++;
                        if(S[p+1]!=' ')
                          {
                           p++;
                           if(S[p+1]!=' ')
                             {
                              p++;
                              if(S[p+1]!=' ')
                                {
                                 p++;
                                 if(S[p+1]!=' ')
                                   {
                                    p++;
                                   }
                                }
                             }
                          }
                       }
                    }
                 }
              }
            }

    }
    return num;
}


    };


int main()
   {
       int T;
       string S;
       number obj;
       cin>>T;
       getline(cin,S);
       while(T--){
       cout<<obj.numb(S)<<endl;
    }}




