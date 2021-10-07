#include<iostream>
#include<string>
using namespace std;
int main()
{
  string b="";
  cin>>b;
  int l=b.size()-1;
  for(int i=0;i<b.size()/2;i++)
  {
    if(b[i]==b[l--]);
    {
      cout<<"string is a palindrome"<<endl;
      return 0;
    }
cout<<"string is not a palindrome"<<endl;
  }
}