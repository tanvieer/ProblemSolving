#include <iostream>
#include <list>
using namespace std;
int main ()
{
  int myints[] = {75,23,65,42,13};
  list<int> mylist (myints,myints+5);

  cout << "mylist contains:";
  for (list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it)
    cout << ' ' << *it;

  cout << '\n';

  return 0;
}
