#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
	string addStrings(string num1, string num2)
	{
		int len1 = num1.size();
		int len2 = num2.size();
		if (len1 <= 0 && num2.size() <= 0)
			return "";
		else if (len1 <= 0)
			return num2;
		else if (len2 <= 0)
			return num1;
		else
		{
			string result = "";
			int c = 0;
			int sum;
			int minlen = min(len1, len2);
			int i = len1 - 1;
			int j = len2 - 1;
			while (minlen > 0)
			{
				sum = c + (num1[i] - '0') + (num2[j] - '0');
				c = sum / 10;
				result += sum % 10 + '0';
				i--;
				j--;
				minlen--;
			}
			// 当num1较长
			while (i != -1)
			{
				sum = c + (num1[i] - '0');
				c = sum / 10;
				result += sum % 10 + '0';
				i--;
			}
			// 当num2较长
			while (j != -1)
			{
				sum = c + (num2[j] - '0');
				c = sum / 10;
				result += sum % 10 + '0';
				j--;
			}
			// 处理最后的进位
			if (i == -1 && j == -1 && c != 0)
				result += c + '0';
			reverse(result.begin(), result.end());
			return result;
		}
	}
};

int main(){
	Solution sol;
	string a = "1234";
	string b = "12345";
	cout << sol.addStrings(a, b) << endl;
	system("pause");
	return 0;
}