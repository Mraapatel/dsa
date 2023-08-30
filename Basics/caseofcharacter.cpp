#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout<<"Enter any alphabet"<<endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "It's lower case alphabet" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "It's uppercase alphabet" << endl;
    }
    else
    {
        cout << "It's number" << endl;
    }
}
