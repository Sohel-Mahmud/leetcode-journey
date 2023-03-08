/*
 * File: 20_valid_parentheses.cpp
 * Project: coding
 * File Created: Wednesday, 1st March 2023 2:48:13 pm
 * Author: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Last Modified: Wednesday, 1st March 2023 2:48:14 pm
 * Modified By: Sohel Mahmud (sohel@staffasia.org)
 * -----
 * Copyright 2021 - 2023 StaffAsia, StaffAsia
 */
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string s = "(){}}{";
    stack<char> st;

    int n = s.length();
    if(n%2!=0) return false;


    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
            cout << "on push " << st.top() << endl;
        }
        else
        {

            if (!st.empty() && ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']')))
            {
                cout << "on pop" << endl;
                st.pop();
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']' && st.empty())
            {
                // result = false;

                return false;
            }
            else
            {
                cout << "on else 1" << endl;
                break;
            }
        }
    }

    return st.empty() ? true : false;

}