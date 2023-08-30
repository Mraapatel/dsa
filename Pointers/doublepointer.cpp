#include <iostream>
using namespace std;
int main()
{
    int num = 50;
    int *p = &num;
    int **p2 = &p;

    cout << &num << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << endl;

    cout << num << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << endl;
    
    cout << &p << endl;
    cout << p2 << endl;

    return 0;
}