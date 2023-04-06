#include<iostream>
#include<iomanip>
using namespace std;
class student
{
   public:     //Making data public
   int roll_no, class_ ;
   string name,division ;
   void get_data()  //creating function in class
{cout<< "Pls enter the roll no.: ";
    cin >> roll_no ;
    cout << "Pls enter the name: ";
    cin >> name;
    cout << "Pls enter the class: ";
    cin >> class_ ;
    cout << "Pls enter the divison (A/B): ";
    cin >> division;
}
void show_data()
{
    cout << name << endl << roll_no << endl << class_ << endl << division << endl;
}
};
int main()
{
   student s1,s2,s3,s4,s5;   //Mebers of the class
cout << "Enter the data of Student 1 " ;
s1.get_data() ;     
cout << "Enter the data of Student 2 ";
s2.get_data() ;
cout << "Enter the data of Student 3 ";
s3.get_data() ;
cout << "Enter the data of Student 4 ";
s4.get_data() ;
cout << "Enter the data of Student 5 ";
   s5.get_data();       //calling function
s1.show_data();
s2.show_data();
s3.show_data();
s4.show_data();
s5.show_data();
cout << "22CS050_BINDIYA Patel" << endl;
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
}s1,s2;       //membersreturn 0;
}