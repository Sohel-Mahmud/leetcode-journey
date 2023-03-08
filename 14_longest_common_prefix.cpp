#include <iostream>
#include <vector>

using namespace std;

string checkPrefix(string s1, string s2){
    string str = "";
    int len = min(s1.length(), s2.length());
    for (int i = 0; i < len; i++)
    {
        if(s1[i] != s2[i]){
            break;
        }
        
                    str = str + s1[i];

            
    }
    return str;
}

string longestCommonPref(vector<string> str, int n){
    string prefix = str[0];

    for (int i = 1; i < str.size(); i++){
        
        prefix = checkPrefix(prefix, str[i]);
    //cout<<prefix<<endl;
    }

    return prefix;
}

int main(){
    vector<string> strs{"aaa","aa","aaa"};

    int size = sizeof(strs) / sizeof(strs[0]);

    string pref = longestCommonPref(strs, size);

    cout << pref << endl;
}
