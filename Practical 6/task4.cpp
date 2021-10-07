#include<iostream>
#include<string>
using namespace std;
int compare(string c,string d)
{ 
  if(c.size()==d.size())
   { 
     for(int i=0;i<c.size();i++)
     {
       if(c[i]!=d[i])
        return 0;
     }
      return 1;
}
  else
  return 0;
}
int main()
{
  string c,d;
  cin>>c;
  cin>>d;
  cout<<(compare(c,d)?"equal":"not equal")<<endl;
}