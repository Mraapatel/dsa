#include <iostream>
using namespace std;
// Using Binary Searchint main()
int peakIndex(int arr[], int size)
{
    int s = 0;
    int e = size-1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
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
    int array[10] = {1,3,5,6,7,9,7,5,3,1};
    int size =10;
    int Index = peakIndex(array,size);

    cout << "The index of peak element in a array is at : " << Index << "th  index. " << endl;
}

