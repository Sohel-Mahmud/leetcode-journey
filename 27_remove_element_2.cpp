/*
 * File: 27_remove_element copy.cpp
 * Project: coding
 * File Created: Thursday, 16th March 2023 10:03:31 pm
 * Author: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Last Modified: Thursday, 16th March 2023 10:03:31 pm
 * Modified By: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Copyright 2021 - 2023 StaffAsia, StaffAsia
 */
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int swapCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]!=val){
                //val not found so insert it on num
                nums[swapCount] = nums[i];
                //increase swapcount to insert more
                swapCount++;
            }
        }
        // swapcount is the lentgh of removed element;
        return swapCount;
    }
};

int main()
{

    Solution sol = Solution();
    vector<int> nums{3, 2, 2, 3};
    int val = 3;
     cout <<"ans: "<< sol.removeElement(nums, val) << endl;
    //sol.removeElement(nums, val);
    return 0;
}