#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string b=" ";
    cout<<"enter a string:"<<endl;
    getline(cin,b);
    cout<<"reversed string"<<endl;
    for(int i=b.size()-1;i>=0;i--)
{
   cout<<b[i];
}
cout<<endl;
reverse(b.begin(),b.end());
cout<<"reversed string using function"<<endl<<b<<endl;
return 0;
}