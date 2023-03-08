/*
 * File: sum_equal_two_pointer.cpp
 * Project: coding
 * File Created: Wednesday, 8th March 2023 3:12:04 pm
 * Author: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Last Modified: Wednesday, 8th March 2023 3:12:04 pm
 * Modified By: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Copyright 2021 - 2023 StaffAsia, StaffAsia
 */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a{10, 20, 35, 50, 75, 80};
    int x = 70;

    int i = 0;
    int j = a.size() - 1;

    while(i<j){
        if(a[i] + a[j] == x){
            cout << "found pair on: " << i << " and " << j << endl;
            break;
        }
        else if(a[i] + a[j] <x){
            i++;
        }else{
            j--;
        }
    }
}