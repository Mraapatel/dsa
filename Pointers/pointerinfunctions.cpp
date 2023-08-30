#include <iostream>
using namespace std;

void function(int *s)
{
    *s = *s + 1;
}

void update(int *r)
{
    r = r + 1; // this will not bring any change to the value  of original pointer in main method
    cout << "pointer 'r' after  " << &r << endl;
}

int sumof(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num = 150;
    int *nump = &num;
    function(nump);
    cout << *nump << endl;

    cout << "before " << nump << endl;
    update(nump);
    cout << "after  " << nump << endl;

    int sum = sumof(arr + 5, 5);

    cout << "the sum of number in array startin from index 3 is :" << sum << endl;

    return 0;
}
