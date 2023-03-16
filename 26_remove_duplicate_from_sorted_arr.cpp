#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &vec)
    {
        auto last = unique(vec.begin(), vec.end()); // print the nums
        vec.erase(last, vec.end());
        
        return vec.size();
    }
};

int main()
{

    Solution sol = Solution();
    vector<int> nums{1, 1, 2,3};
    cout << sol.removeDuplicates(nums) << endl;
    return 0;
}