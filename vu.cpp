#include<iostream>
using namespace std;
int m=30;
int main()
{
int m=20;
{
int m=10;
cout<<"we are in inner block"<<endl;
cout<<"value of m="<<m<<endl;
cout<<"value of ::m="<<::m<<endl;
}
cout<<"we are in outer block"<<endl;
cout<<"value of m="<<m<<endl;
cout<<"value of ::m="<<::m<<endl;
cout<<"22cs050_patel bindiya"<<endl;

return 0;
}