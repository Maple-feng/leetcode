#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int findLUSlength(string a, string b) {
		//只需要判断两字符串是否相等，如果相等就返回-1，不相等就返回较长的字符串长度！
		int a_length = a.length();
		int b_length = b.length();
		if (a == b)
			return -1;
		else
			return a_length > b_length ? a_length : b_length;
	}
};

int main(){
	Solution sol;
	string a = "aba", b = "cdc";
	cout << sol.findLUSlength(a, b) << endl;
	system("pause");
	return 0;
}