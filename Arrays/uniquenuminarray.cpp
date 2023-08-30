#include <iostream>

using namespace std;
int main()
{
    int array[9] = {10, 2, 3, 7, 5, 10, 3, 7, 2};
    int ans = 0;
    for (int i = 0; i < 9; i++)
    {
        ans = ans ^ array[i];
    }
    cout << "The unique number is "<< ans;
    return 0; 
}