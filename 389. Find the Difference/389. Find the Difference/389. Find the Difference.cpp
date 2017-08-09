#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	char findTheDifference(string s, string t)
	{
		vector<int> count(26, 0);
		//自己给创建一个26个元素的数组，字符串一+1，字符串二-1，最后为-1的是有差异的
		for (int i = 0; i < s.length(); ++i)
		{
			count[s[i] - 'a']++;
		}
		for (int j = 0; j < t.length(); ++j)
		{
			count[t[j] - 'a']--;
		}
		for (int i = 0; i < count.size(); ++i)
		{
			if (count[i] == -1)
				return i + 'a';
		}
		return 'z';
	}
};

int main(){
	Solution sol;
	string s = "abcd";
	string t = "abcde";
	cout << sol.findTheDifference(s, t)<<endl;
	system("pause");
	return 0;
}