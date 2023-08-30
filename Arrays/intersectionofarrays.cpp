#include <iostream>
#include <vector>
using namespace std;

//  Two pointer approach

int main()
{

    int arr1[10] = {1, 6, 7, 2, 4, 9, 3, 12, 8};
    int arr2[10] = {2, 6, 1, 5, 7, 10, 25, 2, 4};

    vector<int> result;

    int i = 0;
    int j = 0;
    while (i < 10 && j < 10)
    {
        if (arr1[i] == arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}