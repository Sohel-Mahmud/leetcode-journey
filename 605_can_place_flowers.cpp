#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         if (n > flowerbed.size())
        {
            return false;
        }

        if (flowerbed.size() == 1 && flowerbed[0] == 1 && n >= 1)
        {
            return false;
        }

        if (flowerbed.size() == 1 && flowerbed[0] == 0 && (n == 1 || n==0))
        {
            return true;
        }

        if (flowerbed.size() == 1 && flowerbed[0] == 1 &&  n==0)
        {
            return true;
        }
        int numberOfZeros = 0;
        int needToInsert = n;
        bool flagOfGettingOne = false;
        bool result = false;
        bool containsOnlyZero = true;
        /* for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] != 1)
            {
                needToInsert = needToInsert - (int)((flowerbed.size() / 2) + 1);
                numberOfZeros = 0;

                if (needToInsert <= 0)
                {
                    return result = true;
                }
            }
        } */
        for (int i = 0; i < flowerbed.size(); i++)
        {
            
            if (flowerbed[i] == 0)
            {
                cout << "in zero count" << endl;

                numberOfZeros++;
                if (i == flowerbed.size() - 1)
                {
                    needToInsert = needToInsert - (int)(numberOfZeros / 2);
                    numberOfZeros = 0;

                    if (needToInsert <= 0)
                    {
                        result = true;
                    }
                }
            }
            else if (flowerbed[i] == 1)
            {
                containsOnlyZero = false;
                if (flagOfGettingOne == true)
                {
                    needToInsert = needToInsert - (int)((numberOfZeros -1) / 2);
                    cout << needToInsert << "last 1" << endl;

                    numberOfZeros = 0;
                    if (needToInsert <= 0)
                    {
                        result = true;
                    }
                }
                else
                {

                    needToInsert = needToInsert - (int)(numberOfZeros / 2);

                    numberOfZeros = 0;
                    flagOfGettingOne = true;
                    if (needToInsert <= 0)
                    {
                        result = true;
                    }
                }
            }

            
        }
        if (containsOnlyZero == true)
        {
            n = n - (int)((flowerbed.size() +1) / 2);
            cout << needToInsert << endl;
            if (n <= 0)
            {
                cout << "in true" << endl;
                return result = true;
            }
        }

        return result;
    }
};

int main(){
    
    Solution sol = Solution();
    vector<int> num{0, 0};
    cout << sol.canPlaceFlowers(num, 2);
    return 0;
}