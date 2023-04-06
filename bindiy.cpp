#include<iostream>
#include<iomanip>
using namespace std;

int main(){   
  
   int n;
  
  
   cout<<"Enter number of elements:";
   cin>>n;
  
   int *arr = new int(n);  
  
   cout<<"enter elements : "<<endl;
  
   for(int i=0;i<n;i++){
       cin>>arr[i];      //entering elements of array
   }
  
   cout<<"elements of an array after adding 2 : "<<endl;
  
   for(int i=0;i<n;i++){
       cout<<arr[i]+2<<endl;      // addind the values
   }
  
   delete [] arr;    //deleting a array
   
   cout << "22cs050_bindiya Patel" <<endl;
}