#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int sum = 0;
    int i = 2;
    while (i < num)
    {
        sum += i;
        i += 2;
    }
    cout << "The sum of even number between 0 and " << num << " is " << sum << endl;
}