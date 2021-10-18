#include<iostream>
using namespace std;
int main()
{
  int  c;
  cin>>c;
  switch(c)
  {
    case 1: cout<<"Current year is 2021"<<endl;
             break;
    case 2: cout<<"Current month is October"<<endl;
             break;
    case 3: cout<<"Current date is 13th october 2021"<<endl;
             break;
    case 4: cout<<"Current time is 7:00 pm"<<endl;
             break;
    default: cout<<"Invalid choice"<<endl;
             break;
   }
   return 0;
 }        