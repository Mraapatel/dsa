#include <iostream>
using namespace std;
int intPart(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }

        if (square > n)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double pointpart(int n, int precision, int tempsquare)
{
    double ans = tempsquare;
    double factor = 1;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    int tempSquare = intPart(num);
    double answer = pointpart(num, 5, tempSquare);
    cout << "The square root of number is : " << answer << endl;
}