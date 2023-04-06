#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  float a, b;
  cout << "Enter values of a and b" << endl;
  cin >> a >> b;
  cout << fixed << a+b << endl;
  cout << scientific << a+b << endl;
  cout << setprecision(2) << a+b << endl;   //the changes will be made in scientific value
  cout << "22CS050 BINDIYA  Patel" << endl;
  return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  float a, b;
  cout << "Enter values of a and b" << endl;
  cin >> a >> b;
  cout << scientific << a+b << endl;
  cout << fixed << a+b << endl;
  cout << setprecision(2) << a+b << endl; //it will set the fixed value
  return 0;
}