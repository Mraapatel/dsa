#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            cout << "the number is power of two" << endl;
            break;
        }
       
        if (ans <= (INT_MAX / 2))
        {
            ans = ans * 2;
        }
    }
    return 0;
}
