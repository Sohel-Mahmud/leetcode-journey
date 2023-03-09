/*
 * File: 1207_unique_number_of_occurences.cpp
 * Project: coding
 * File Created: Wednesday, 8th March 2023 9:59:30 pm
 * Author: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Last Modified: Wednesday, 8th March 2023 9:59:31 pm
 * Modified By: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Copyright 2021 - 2023 StaffAsia, StaffAsia
 */
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>

using namespace std;

int main()
{
    vector<int> arr{1,2};
    map<int, int> frequency;
    for (int i = 0; i < arr.size(); i++)
    {
        int val = arr.at(i);
        frequency[val] = frequency[val] + 1;
    }

    map<int, int> uniqueMap;
    for (auto it : frequency)
    {
        // find the key in uniqueMap
        if (uniqueMap.find(it.second) != uniqueMap.end())
        {
            cout << "false" << endl;
            return 0;
        }
        else
        {
            uniqueMap[it.second] = it.first;
        }
    }
}