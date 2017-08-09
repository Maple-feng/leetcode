#include <iostream>
using namespace std;

class Solution {
public:
	//���ģ�ⲻ��λ�ļӷ���carry�������������λλ�ã�����һλ���ݹ�
	int getSum(int a, int b) {
		if (b == 0) return a;   // ��carryΪ0,����a 
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