/*
 * File: 2160_
 * Project: coding
 * File Created: Wednesday, 1st March 2023 5:31:33 pm
 * Author: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Last Modified: Wednesday, 1st March 2023 5:31:34 pm
 * Modified By: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Copyright 2021 - 2023 StaffAsia, StaffAsia
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int num = 2932;

    string str = to_string(num);
    sort(str.begin(), str.end());
    cout << str << endl;
}