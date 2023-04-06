#include<iostream>
using namespace std;
class swap   //creating class
{
   public:     //making it public
        int num;
   public:
        void getdata()
        {
           cout<< "Enter num";
           cin>> num;
        }
}s1,s2;       //members
int main()
{
  
   s1.getdata(); //10
   s2.getdata(); //20
   cout<<"Before Swapping : "<< endl;
   cout<<"For s1 number"<< s1.num<<endl;
   cout << "For s2 number" << s2.num <<endl;
   s1.num=s1.num +s2.num;     //10+20=30
   s2.num=s1.num-s2.num;      //30-20=10=s2
   s1.num= s1.num - s2.num;   //30-10=20=s1
   cout<< "After swapping : "<< endl;
   cout<<"For s1 num :" << s1.num <<endl;
   cout << "For s2 num :" << s2.num << endl;
   cout << "22CS050_BINDIYA Patel" << endl;
   return 0;
   }
