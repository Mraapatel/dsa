#include <iostream>
using namespace std;
int main()
{

    int a[10] = {5, 2, 7, 3, 8, 6, 9, 1, 4, 10};

    for (int i = 1; i < 10; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (a[j] > temp)
                a[j + 1] = a[j];
            else
                break;

            j--;
        }
        a[j + 1] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
}
