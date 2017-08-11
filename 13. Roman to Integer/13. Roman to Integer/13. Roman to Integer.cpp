#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
	int romanToInt(std::string s) {
		int sum = 0;
		char char_arr[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
		int int_arr[] = { 1, 5, 10, 50, 100, 500, 1000 };
		map<char, int> roman_map;
		int map_len = sizeof(char_arr) / sizeof(char);
		for (int i = 0; i< map_len; ++i)
			roman_map.insert(pair<char, int>(char_arr[i], int_arr[i]));
		//插入相应位置的map
		for (int i = 0; i < s.length() - 1; ++i) {
			if (roman_map[s[i]] >= roman_map[s[i + 1]])
				//前一个大于等于后一个相加，小于相减
				sum += roman_map[s[i]];
			else
				sum -= roman_map[s[i]];
		}
		sum += roman_map[s[s.length() - 1]];
		return sum;
	}
};

int main(){
	Solution sol;
	string str = "DCXXI";
	cout << sol.romanToInt(str) << endl;
	system("pause");
	return 0;
}