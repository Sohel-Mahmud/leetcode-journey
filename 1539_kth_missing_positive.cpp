/*
 * File: 1539_kth_missing_positive.cpp
 * Project: coding
 * File Created: Monday, 6th March 2023 8:57:08 pm
 * Author: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Last Modified: Monday, 6th March 2023 8:57:08 pm
 * Modified By: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Copyright 2021 - 2023 StaffAsia, StaffAsia
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3};
    int length = arr.size();
    int k = 5;
    int count = 0;
    int value = 0;
    int result;

    if (arr[length - 1] == length)
    {
        return result = arr[length - 1] + k;
    }
    else
    {
        for (int i = 0; i < length + k; i++)
        {
            if (arr[value] != i + 1)
            {
                count++;
                cout << "count: " << count << endl;
                if (count == k)
                {
                    result = i + 1;
                    break;
                }
            }
            else
            {
                if (value < length -1)
                {
                    value++;
                }
                cout << "value: " << count << endl;
            }
        }
    }

    cout << result << endl;
}
