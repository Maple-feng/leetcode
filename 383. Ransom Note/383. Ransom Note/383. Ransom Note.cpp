#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	//判断第一个字符串中每一个字符出现的次数与第二个字符串中每一个字符串出现的次数进行比较。
	bool canConstruct(string ransomNote, string magazine) {
		vector<int> hash(26, 0);
		for (auto c : magazine) {
			++hash[c - 'a'];
		}
		for (auto c : ransomNote) {
			if (--hash[c - 'a'] < 0) {
				return false;
			}
		}
		return true;
	}
};

int main(){
	Solution sol;
	string ransomNote = "a";
	string magazine = "b";
	cout << sol.canConstruct(ransomNote, magazine) << endl;
	system("pause");
	return 0;
}