#include <iostream>
using namespace std;

int main() 
{
  int number1, number2;
  cout << "Enter two integers: ";
  cin >> number1;
  cin >> number2;
 
 if (number1 > number2) {
    cout << number1 << " is greater than " << number2;
  } 
  else if (number2 > number1) {
    cout << number2 << " is greater than " << number1;
  }
  else {
    cout << "Both integers are equal";
  }
   return 0;
}
