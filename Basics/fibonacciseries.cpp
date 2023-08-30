#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number " << endl;
    cin >> num;

    int a = 0;
    int b = 1;
    cout<<a<<" ";
    cout<<b<<" ";
    for (int i = 1; i <= num; i++)
    {
        long  sum = a + b;
        cout << sum<<" ";
        a = b;
        b = sum;
    }

    return 0;
}