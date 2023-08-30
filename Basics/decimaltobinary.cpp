#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    int i = 0;
    float answer = 0;

    while (num != 0)
    {
        int bit = num & 1;                           //note - accessing digits

        answer = ( bit * pow(10, i)) + answer;

        num = num >> 1;                             //note - right shift

        i++;
    }
    cout << "Answer is " << answer << endl;
}