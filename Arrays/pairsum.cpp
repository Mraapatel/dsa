#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

//  In answer each pair must be sorted  i.e the first value should be less than or equal  second value
int main()
{
    int nums[10]= {1,2,3,4,5,6,7,8,8,10};
    int n = 9;
    cout << search(nums,n);
   
}

int search(int nums[], int target)
{

    // Write Your Code Here
    vector<vector<int>> result;
    int size =sizeof(nums);
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j <  size; j++)
        {
            if ( nums[i] + nums[j] = target)
            {

                vector<int> temp;
                temp.push_back(min(nums[i], nums[j]));
                temp.push_back(max(nums[i], nums[j]));
                result.push_back(temp);
            }
        }
    }

    sort(result.begin(), result.end());
    return result;
}
