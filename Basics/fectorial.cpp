#include <iostream>
using namespace std;

int main()
{
  int n;
  long factorial = 1.0;

  cout << "enter a positive integer:";
  cin >> n;

  if (n < 0)
    cout << "error! Factotrial of negetive number dosen't exist.";
  else
  {
    for (int i = 1; i <= n; i++)
    {
      factorial *= i ;  // work only for 1 to 12 numbers 
    }
    cout << "factorial of " << n << " is " << factorial;
  }
  return 0;
} 