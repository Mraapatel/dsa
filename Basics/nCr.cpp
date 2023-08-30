#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void contineous()
{
    int a, b;
    cout << "Enter the the value of n  and r" << endl;
    cin >> a >> b;
    int numerator = factorial(a) ;
    int denominator = factorial(b)* factorial(a - b);
    int count =numerator/denominator;
    cout << count;
}
int main()
{
    contineous();
    return 0;
}