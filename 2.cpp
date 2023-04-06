#include<iostream>
#include<iomanip>
using namespace std;
struct College_Details  //creating structure
{
   char college_name[10];
   char college_code[10];
   char deparment[5];
   int intake;
}c;

int main()
{
   cout << "++++Enter the college Information++++" <<endl;
   cout << "Name of the college : ";
   cin >> c.college_name;     //input through user
   cout << "College code : " ;
   cin >> c.college_code;
   cout << "Department : " ;
   cin >> c.deparment;
   cout << "****College Information****" << endl;
   //Displaying the results
   cout << "University name is :" << c.college_name << endl;
   cout << "College code :" << c.college_code << endl;
   cout << "Department :" << c.deparment << endl;
   cout << "22cs050_patel bindiya" << endl;
   return 0;
}