#include <iostream>
using namespace std;

class Solution {
public:
	//异或模拟不进位的加法，carry两数相与求出进位位置，左移一位，递归
	int getSum(int a, int b) {
		if (b == 0) return a;   // 当carry为0,返回a 
		int sum = a ^ b;
		int carry = (a & b) << 1;
		return getSum(sum, carry);
	}
};

int main(){
	Solution sol;
	int a = 1, b = 2;
	cout << sol.getSum(a, b) << endl;
	system("pause");
	return 0;
}