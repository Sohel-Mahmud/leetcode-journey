
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    void binarySearch(vector<int> nums, int low, int high)
    {
        // int low = 0, high = nums.size() - 1;
        int size = nums.size() - 1;
        //int mid;

        while (low < high)
        {
            int mid = (high + low) / 2;

            if (nums[low] < nums[mid])
            {
                low = low + 1;
            }
            else
            {
                high = mid;
            }
        }

        if(nums[low] == nums[high]){
            cout << "Found at" << low << endl;
        }
        }
};

int main(){
    
    Solution sol = Solution();
vector<int> nums{0,1,2,3,2,1,0};
    sol.binarySearch(nums, 0, nums.size() - 1);
    
    return 0;
}