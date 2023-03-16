#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        //unique(nums.begin(), nums.end());
        for (int i = 0; i<nums.size() -1; i++){
            if (nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

int main(){
    
    Solution sol = Solution();
    vector<int> nums{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << sol.containsDuplicate(nums) <<endl;
    return 0;
}