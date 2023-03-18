#include <iostream>
#include <vector>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n, digit;
    while (temp > 0) {
        digit = temp % 10;
        sum += (digit * digit * digit);
        temp /= 10;
    }
    return (sum == n);
}


string boolToString(bool b) {
    return b ? "It is an ARMSTRONG number" : "It is NOT an ARMSTRONG number";
}

vector<string> armstrongNumber(vector<int> arr) {
	// Write your code here
	vector<string> result;

	for(int num : arr){
		result.push_back(boolToString(isArmstrong(num)));
	}
	
	return result;
}

int main(){
    vector<int> arr = {153, 370, 372};
    vector<string> result = armstrongNumber(arr);
    for(string s : result){
        cout << s << endl;
    }
    return 0;
}