#include<iostream>
using namespace std;

class num{   //creating class
  
   int i=0;
   float x,y,z;
   bool flag;
   float sum;
   float avg;
  
   public:    //making data public
  
   void divide(int n,int m){    //functon inside the class
   cout<<"enter numerator :";
   cin>>n;
   cout<<"enter denominator :";
   cin>>m;
  
   if(n%m==0){
       cout<<"number is divisible"<<endl<<endl;
   }
   else{
       cout<<"number is non divisible"<<endl<<endl;
   }  
   }
  
   void divide(int a){
      
       cout<<"Enter a number :";
       cin>>a;
      
       for(int i=2;i<a;i++){
      
       if(a%i==0){
           cout<<"non prime"<<endl<<endl;
           flag = 1;
           break;
       }
   }
   if(flag==0){
       cout<<"prime"<<endl<<endl;
       }
   }
  
   void divide(float x,float y,float z){
      
       cout<<"Enter number 1 :";
       cin>>x;
      
       cout<<"Enter number 2 :";
       cin>>y;
      
       cout<<"Enter number 3 :";
       cin>>z;
      
       sum = x + y + z;
       avg=sum/3;
       cout<<"average :"<<avg;
      
       }
}s1;   //member of class

int main(){
  
   int m,n,x,y,z,a;
  
  
   s1.divide(m,n);
   s1.divide(a);
   s1.divide(x,y,z);
   cout << "22cs050 bindiya Patel"<<endl;
}