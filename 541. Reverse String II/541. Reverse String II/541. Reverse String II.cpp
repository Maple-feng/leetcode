#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	string reverseStr(string s, int k) {
		for (int i = 0; i < s.size(); i += 2 * k) {
			reverse(s.begin() + i, min(s.begin() + i + k, s.end()));
			//0(0,2),4(4,6)---end的前一个
		}
		return s;
	}
};

int main(){
	Solution sol;
	string s = "abcdefg";
	int i = 2;
	cout << sol.reverseStr(s, i) << endl;
	system("pause");
	return 0;
}