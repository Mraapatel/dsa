#include <iostream>
using namespace std;
void sumofarray(int ar[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += ar[i];
    }
    cout << "The sum of all elements of an array is : " << sum;
    return;
}
int main()
{
    int size;
    cout << "Enter the size of the arry " << endl;
    cin >> size;
    int arry[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arry[i];
    }
    sumofarray(arry, size);

    return 0;
}