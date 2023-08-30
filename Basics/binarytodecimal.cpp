#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;               //note - accessing digits
        if (digit == 1)
        {
            ans += (pow(2, i));
        }
        i++;
        n = n / 10 ;                     //note 
    }

    cout << ans;
    return 0;
}