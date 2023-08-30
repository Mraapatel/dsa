#include <iostream>
using namespace std;

void Merge(int ar[], int low, int mid, int high)
{
    int temp[15];
    int k = low;
    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (ar[i] <= ar[j])
        {
            temp[k] = ar[i];
            i++;
        }
        else
        {
            temp[k] = ar[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = ar[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        temp[k] = ar[j];
        j++;
        k++;
    }

    for (int l = low; l <= high; l++)
    {
        ar[l] = temp[l];
    }
}

void MergeSort(int ar[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        MergeSort(ar, low, mid);
        MergeSort(ar, mid + 1, high);
        Merge(ar, low, mid, high);
    }
}

int main()
{
    int arr[15] = {5, 8, 32, 7, 5, 8, 7, 2, 8, 54, 85, 64, 92, 35, 75};
    MergeSort(arr, 0, 14);

    cout << "Sorted array: ";
    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}