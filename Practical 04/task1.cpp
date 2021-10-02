#include<iostream>
using namespace std;
void charfunc()
{
char a='A';
cout<<a<<endl;
}
void boolfunc()
{
bool a=(10>9);
cout<<a<<endl;
}
void shortfunc()
{
short s=200;
cout<<s<<endl;
}
void intfunc()
{
short a=500;
cout<<a<<endl;
}
void longfunc()
{
long b=32;
cout<<b<<endl;
}
void floatfunc()
{
float s=3.45f;
cout<<s<<endl;
}
void doublefunc()
{
double s=6789;
cout<<s<<endl;
}
void longdoublefunc()
{
long double s=16788L;
cout<<s<<endl;
}
int main()
{
 charfunc();
 boolfunc();
 shortfunc();
 intfunc();
 longfunc();
 floatfunc();
 longdoublefunc();
 }