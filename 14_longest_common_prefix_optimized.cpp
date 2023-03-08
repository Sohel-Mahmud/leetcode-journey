#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> strs{"aaa", "aa", "aaa"};

    sort(strs.begin(), strs.end());

    string firstItem = strs[0];
    string lastItem = strs[strs.size() - 1];
    string prefix = "";
    for (int i = 0; i < firstItem.size(); i++)
    {
        if(firstItem[i] == lastItem[i]){
            prefix = prefix + firstItem[i];
        }else{
            break;
        }
    }

    cout << prefix << endl;
}
