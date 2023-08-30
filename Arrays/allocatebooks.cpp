#include <iostream>
#include <limits.h>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid){
                return false;
            }
             pageSum = 0 ;
            pageSum = arr[i];
        }
    }
    return true;
}

int main()
{
    int array [10]={10,20,30,40,50,60,70,80,90,100};
    int noofstudent = 5;
    int s = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += array[i];
    }
    int e = sum;
    int ans = -1;

    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(array, 10,  noofstudent, mid))
        {
            ans = mid;
            e = mid + 1;
        }
        else
        {
            s = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    cout<< ans ;
    // return 0;
}