#include<iostream>
using namespace  std;
namespace first{
  void add (int x,int y)
  {
     cout<< "First"<<endl;
     cout<<x+y<<"\n";
  }
}

namespace second{
  void add (float a,float b)
  {
     cout<< "Second"<<endl;
     cout<<a+b<<"\n";
  }
}
using namespace first;
using namespace second;
int main()
{
   //add(1,2);
   //add(1.1f,2.1f);
   add(1,1.2f);
   //add (1,1.2f);
   //add(0,0);
   //add(1.2,2);
   //add(1,2.1);
   //add(1.1,2.1);
   return 0;
}