#include <iostream>
using namespace std;
bool serch(int ar[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (ar[i] == key)
        {
            return 1;
        }
    }

    return 0;
}
int main()
{
    int size, key;
    cout << "Enter the size of the arry " << endl;
    cin >> size;
    int arry[100];
    cout << "Enter the elements of the arry " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arry[i];
    }
    cout << "Enter the key : " << endl;
    cin >> key;

    bool found = serch(arry, size, key);

    if (found)
    {
        cout << "The key is present in this array " << endl;
    }
    else
    {

        cout << "The key is  not present in this array " << endl;
    }

    return 0;
}