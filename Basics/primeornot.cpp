#include <iostream>
using namespace std;

/*int main()
{
  int num;
  cout << "Enter a number" << endl;
  cin >> num;
  bool isPrime = 1;
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      isPrime = 0;
      break;
    }
  }

  if (isPrime == 0)
  {
    cout << "The number is  not prime" << endl;
  }
  else
  {
    cout << "The number is  a  prime" << endl;
  }
}*/

bool isPrime(int num)
{
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{

  int a;
  cout << "Enter a number" << endl;
  cin >> a;
  if (isPrime(a))
  {
    cout << "The number is Prime" << endl;
  }
  else
  {
    cout << "The number is  not Prime" << endl;
  }
}
