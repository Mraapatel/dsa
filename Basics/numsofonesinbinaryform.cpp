#include <iostream>
using namespace std;
int forfirst(int first)
{

    float count = 0;
    while (first != 0)
    {

        count = count + (first & 1);

        first = first >> 1;
    }
    return count;
}
int forsecond(int second)
{
    float count1 = 0;
    while (second != 0)
    {

        count1 = count1 + (second & 1);

        second = second >> 1;
    }
    return count1;
}
int main()
{
    int a, b;
    cout << "Enter a first number" << endl;
    cin >> a;
    cout << "Enter a second number" << endl;
    cin >> b;
    float abit = forfirst(a);
    float bbit = forsecond(b);
    float total = abit + bbit;
    cout << "The total number of set bits in both the number combined is " << total;
}