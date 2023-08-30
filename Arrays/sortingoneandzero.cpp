#include <iostream>
using namespace std;
int main()
{
    int array[10] = {1, 1, 1, 1, 1, 0, 0, 1, 0, 0};
    int i = 0;
    int j = 10-1;
    while (i < j)
    {
        while (array[i] == 0 && i < j)
        {
            i++;
        }
        while (array[j] == 1 && i < j)
        {
            j--;
        }
        if (array[i] == 1 && array[j] == 0 && i < j)
        {
            swap(array[i], array[j]);
        }
    }
   
     for (int i = 0; i < 10; i++)
    {
        cout << array[i]<< " ";
    }
    return 0;
}