#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int countTriplets(vector<int>& nums, int diff) {
    //sort(nums.begin(), nums.end()); // Sort the input array in increasing order
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1;
        int k = i + 2;
        while (k < n) {
            if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff) {
                count++;
                j++;
                k++;
            }
            else if (nums[k] - nums[j] > diff) {
                j++;
            }
            else {
                k++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {0,1,4,6,7,10};
    int diff = 3;
    int triplets = countTriplets(nums, diff);
    cout << "Number of unique arithmetic triplets: " << triplets << endl;
    return 0;
}