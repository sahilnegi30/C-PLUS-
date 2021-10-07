
   
#include<iostream>
using namespace std;
int main()
{
  char a='A';
  char b='B';

  string s1="DDN";
  string s2="DDN";
  int x= int(a-b);
  int y=s1.compare(s2);
  cout<< "Comparison of 'A' and 'B':"<< x << endl;
  cout<< "Comparison of DDN and DDN:";
  
  if(y==0)
{ 
  cout<< " equal" << endl;
}
if(y>0)
{
 cout<< "string s1 is greater than s2"<< endl;
}
  if(y<0)
{
  cout<<"string s1 is smaller than s2"<< endl;
}
return 0;
}