#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(), nums.end());
        vector<int> duplicateIndexes;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                duplicateIndexes.push_back(i);
            }
        }
        if(duplicateIndexes.empty()){
            return nums.size();
        }

        /* for (int i = 0; i < duplicateIndexes.size(); i++){
            cout << duplicateIndexes[i] << " ";
        } */
        int sizeOfDuplicateIndex = duplicateIndexes.size();
        int remainingIndexes = nums.size() - (duplicateIndexes[duplicateIndexes.size() - 1] + 1);
        //cout
          //  << remainingIndexes << endl;
        int iteration = 0;
        if (remainingIndexes > 0)
        {
            for (int i = duplicateIndexes[0]; i < nums.size(); i++)
            {
                iteration++;
                if (iteration <= remainingIndexes)
                {
                    cout <<"swapped "<< nums[duplicateIndexes[sizeOfDuplicateIndex - 1] + iteration] << endl;
                    nums[i] = nums[duplicateIndexes[sizeOfDuplicateIndex - 1] + iteration];
                }
            }
        }

        for (int i = 0; i < nums.size(); i++){
            cout << nums[i] << " ";
        }

        return nums.size() - duplicateIndexes.size();
    }
};

int main()
{

    Solution sol = Solution();
    vector<int> nums{3,2,2,3};
    int val = 3;
    //cout <<"ans: "<< sol.removeElement(nums, val) << endl;
    sol.removeElement(nums, val);
    return 0;
}