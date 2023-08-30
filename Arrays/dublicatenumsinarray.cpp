#include <iostream>
#include <list>

using namespace std;
int main()
{

    int arr[10] = {1, 5, 7, 6, 9, 2, 7, 5, 6, 0};

    list<int> result;
    for (int i = 0; i < 10; i++)
    {
        int index = arr[i] - 1;

        if (arr[index] < 0)
        {
            result.push_back(arr[index + 1]);
        }

        arr[index] = arr[index] * (-1);
    }
    list<int>::iterator iter;
    for (int i = 0; i < 10; i++)
    {
        cout << *iter;
        iter++;
    }
    return 0;
}
