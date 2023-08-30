#include <iostream>
using namespace std;
// Using Binary Search
int firstIndex(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
    }
    return ans;
}
int lastIndex(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int array[10] = {1, 2, 5, 5, 5, 5, 5, 5, 8, 9};
    int fstIndex = firstIndex(array, 10, 5);
    int lstIndex = lastIndex(array, 10, 5);
    cout << "The first and last index of 5 is : " << fstIndex << " and " << lstIndex << endl;

    // To find the total number of occurance of a number
    cout << "Total number of occurance of a number is " << (lstIndex - fstIndex) + 1;
}