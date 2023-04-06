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
  cout << "22CS050_ BINDIYA  Patel" << endl;
  return 0;
}
