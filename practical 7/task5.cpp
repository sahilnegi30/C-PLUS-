#include<iostream>
using namespace std;
int main()
{
  int b[3][3];
  int a [3] [3]={1,2,3,4,5,6,7,8,9};
  for(int i=0;i<3;i++)
  {
     for(int j=0;j<3;j++)
     {
       b[i][j]=a[2-i] [2-j];
     }
   }
  for(int i=0;i<3;i++)
  {
     for(int j=0;j<3;j++)
     {
       cout<<b[i][j]<<" ";
     }
     cout<<endl;
   }
   return 0;
}