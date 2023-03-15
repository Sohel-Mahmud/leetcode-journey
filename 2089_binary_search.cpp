#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> foundLocation;
    void binarySearch(vector<int> nums, int toFind, int low, int high)
    {
        // int low = 0, high = nums.size() - 1;
        int size = nums.size() - 1;
        int mid;

        while (high - low > 1)
        {
            int mid = (high + low) / 2;

            if (nums[mid] < toFind)
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }

        if (nums[low] == toFind)
        {
            
            foundLocation.push_back(low);
            if (low != nums.size() - 1)
            {
                binarySearch(nums, toFind, low + 1, size);
            }
        }
        else if (nums[high] == toFind)
        {
            foundLocation.push_back(high);

            if (high != nums.size() - 1)
            {
                binarySearch(nums, toFind, high + 1, size);
            }
        }
        else
        {
            cout << "Not Found" << endl;
        }
    }
};

int main()
{

    Solution sol = Solution();
    int toFind = 3;
    vector<int> nums{1, 2, 3,3, 4, 5};
    sol.binarySearch(nums, toFind, 0, nums.size() - 1);
    
    //print vector through auto
    for (auto i : sol.foundLocation)
    {
        cout << i << " ";
    }
    return 0;
}