#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter the value of  a :" << endl;
    cin >> a;
    cout << "Enter the value of b : " << endl;
    cin >> b;
    cout << "Enter the operation you want to do :" << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Enter the valid operator " << endl;
        break;
    }
}