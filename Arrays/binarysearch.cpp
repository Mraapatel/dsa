// Bineray search will only work on sorted arrays
//  In this case ascending ordered array
#include <iostream>
using namespace std;
int binaryBearch(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // OR mid= (start + end ) / 2  -> here we have written  in this way to over come the problem of size of int variables
                                             //  i.e start and end is very large nums
        if (array[mid] == key)
        {
            return mid;
        }
        if (key < array[mid])
        {
            end = mid - 1;
        }
        if (key > array[mid])
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int even[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int odd[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    int evenIndex = binaryBearch(even, 10, 8);
    cout << "The index of the number 8 is : " << evenIndex << endl;

    int oddIndex = binaryBearch(odd, 10, 15);
    cout << "The index of the number 15 is : " << oddIndex << endl;

    return 0;
}

