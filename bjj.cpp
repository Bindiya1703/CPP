#include<iostream>
using namespace std;

int tonLarge(int &x,int &y) //creating function
{
 if(x>y)
 {
     x=100;
     return x;
 }
 else
 {
     y=100;
     return y;
     }
}
int main()
{
   int n1,n2,&x=n1,&y=n2;
   cout<<"Enter two Number :"<<endl;
   cin>>n1>>n2;  //user inputing the values
   cout<<"Entered number are :"<<n1<<" "<<n2<<endl;
   tonLarge(x,y); //calling the function
   cout<<"Entered number After oparator are :"<<n1<<" "<<n2<<endl<<endl;
   cout<<"22cs050_binidya Patel."<<endl;
}