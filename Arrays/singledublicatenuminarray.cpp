#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 6, 4, 8, 9, 5, 7, 4};
    int ans = 0;

    for (int i = 0; i < 10; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < 10; i++)
    {
        ans = ans ^ i;
    }

    cout << ans;
}