#include <iostream>
using namespace std;
void reverse(int ar[], int size)
{
    int end = size - 1;
    int start = 0;
    while (start <= end)
    {
        swap(ar[start], ar[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << ar[i]<< " ";
    }
    return ; 
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
    cout<<endl;
    reverse(arry, size);
}