#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	string convertToBase7(int num) {
		if (num == 0){
			return "0";
		}
		vector<char> vec;//因为num % 7 + '0' - 0是char类型，所以定义char型
		bool isnegative = false;
		if (num < 0) {//负数
			num = -num;
			isnegative = true;
		}
		while (num > 0) {//进制转换
			vec.push_back(num % 7 + '0' - 0);
			num /= 7;
		}
		if (isnegative){//负数
			vec.push_back('-');
		}
		return string(vec.rbegin(), vec.rend());//逆序迭代器,char到string的转换
	}
};

int main(){
	Solution sol;
	int num = 100;
	string ret = sol.convertToBase7(num);
	cout << ret << endl;
	system("pause");
	return 0;
}