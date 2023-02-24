#include <iostream>
using namespace std;

int main() 
{
  int number,i;
  cout << "Enter the number: ";
  cin >> number;
  
  cout<<"Even numbers from 0 to "<<number<<endl;
  for(i=0;i<=number;i+=2){
   cout<<i<<endl;
  }
 
 return 0;
}