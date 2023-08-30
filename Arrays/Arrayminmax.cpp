#include <iostream>
#include <limits.h>
using namespace std;
int Maxvalue(int arr[], int size)
{

    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // OR maxi = max ( maxi, arr[i]);      note:  'max' is a function which returns maximum value passed in arguments.

        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int Minvalue(int arr[], int size)
{

    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {

        // OR mini = min ( mini, arr[i]);      note:  'min' is a function which returns minimum value passed in arguments.

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = Maxvalue(arr, size);
    int min = Minvalue(arr, size);
    cout << "The maximum value is " << max << endl;
    cout << "The mainimum value is " << min << endl;
    return 0;
}




