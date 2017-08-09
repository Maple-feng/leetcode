#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		unordered_set <char> row1 = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p' };
		unordered_set <char> row2 = { 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l' };
		unordered_set <char> row3 = { 'z', 'x', 'c', 'v', 'b', 'n', 'm' };
		vector<string> out;
		for (auto &elem : words)//C++11和Python for循环类似
		{//取出每一个字符串
			bool d1 = true, d2 = true, d3 = true;
			for (auto &key : elem)//判断每个字符串的每个元素
			{
				if (d1)//判断在不在第一行,若第一个在第一行，其他就为false，不在判断
				{
					auto re = row1.find(tolower(key));//tolower(key)转换成小写
					if (re == row1.end())
						d1 = false;
				}
				if (d2)//判断在不在第二行
				{
					auto re = row2.find(tolower(key));
					if (re == row2.end())
						d2 = false;
				}
				if (d3)//判断在不在第三行
				{
					auto re = row3.find(tolower(key));
					if (re == row3.end())
						d3 = false;
				}

			}
			if (d1 || d2 || d3)//都成立输入动态数组
				out.push_back(elem);
		}

		return out;
	}
};

int main(){
	Solution sol;
	string str[4] = { "Hello", "Alaska", "Dad", "Peace" };
	vector<string> vec(str, str + 4);
	vector<string> ret = sol.findWords(vec);
	for (int i = 0; i<ret.size(); i++)
	{
		cout << ret[i] << endl;
	}
	system("pause");
	return 0;
}