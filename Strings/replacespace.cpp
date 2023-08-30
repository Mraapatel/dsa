#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string " << endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '@';
        }
    }
    cout << str << endl;
}









