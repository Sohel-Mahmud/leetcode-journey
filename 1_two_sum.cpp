#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums{2, 7, 11, 15};

    vector<int> result;
    int target = 9;
    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = i+1; j < nums.size(); j++)
        {
            if(target = nums[i] + nums[j]){

                result.push_back(i);
                result.push_back(j);
            }
            
            
        }
    }

    // print a vector
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}