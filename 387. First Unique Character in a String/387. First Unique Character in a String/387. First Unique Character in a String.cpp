#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {
		map<char, int> map;
		for (int i = 0; i < s.length(); ++i){//map中若存在则+1，不存在新加入
			map[s[i]]++;
		}
		for (int i = 0; i < s.length(); ++i){
			if (map[s[i]] == 1)//找到map中第一个 个数为1的数
				return i;
		}
		return -1;
	}
};

int main(){
	Solution sol;
	string s = "loveleetcode";
	cout << sol.firstUniqChar(s) << endl;
	system("pause");
	return 0;
}