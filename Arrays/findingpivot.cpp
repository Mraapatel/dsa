#include <iostream>
using namespace std;
// Using Binary serch method
int searchPivot(int arr[], int size)
{

    int s = 0;
    int e = 10 - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}
int main()
{
    int array[10] = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    int pivotIndex = searchPivot(array, 10);
    cout << "The index of pivot element is : " << pivotIndex << endl;
}