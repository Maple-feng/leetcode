#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
	//给出一个只包含大小写字母的字符串，问由这些字母组成的最长回文串是多长
	int longestPalindrome(string s) {
		unordered_map<char, int> hash;
		for (auto i : s) {
			hash[i]++;//统计字母个数
		}
		int ans = 0, odd = 0;
		for (auto val : hash)
		{
			if (val.second & 1) {//变量最低位是否为1
				odd = 1;
			}
			ans += val.second & 0xfffffffe;//判断其他高位
		}
		return ans + odd;//有奇数的奇数放中间，偶数放两边即可
	}
};

int main(){
	Solution sol;
	string str = "abccccdd";
	cout << sol.longestPalindrome(str) << endl;
	system("pause");
	return 0;
}