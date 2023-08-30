#include <iostream>
using namespace std;
void reverse(int ar[], int size)
{

    int start = 0;
    while (start + 1 < size)
    {
        // it swap does not work
        // int temp ;
        // temp = ar[start];
        // ar[start] = ar[start+1];
        // ar [start+1] = temp ;

        swap(ar[start], ar[start + 1]);

        start = start + 2;
    }
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    return;
}

int main()
{
    int size;
    cout << "Enter the size of the arry " << endl;
    cin >> size;
    int arry[100];
    cout << "Enter the elements of the arry " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arry[i];
    }
    cout << endl;
    reverse(arry, size);
}