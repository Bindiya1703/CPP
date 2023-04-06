#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
//creating inline function
inline int power(double base,int p)
{
   return pow(base,p);
}

int main()
{
   int a,b;
   cout<<"enter number:";
   cin>>a>>b;

   int result=pow(a,b); //using inbuilt function.
   cout<<a<<" raise to "<<b<<" is "<< pow(a,b) << endl;
   cout<<"Prepared by 22cs050_bindiyaPatel";
}