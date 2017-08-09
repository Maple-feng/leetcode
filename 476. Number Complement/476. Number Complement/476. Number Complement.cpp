#include <iostream>

using namespace std;
class Solution {
public:
	int findComplement(int num) {
		int temp = num, mask = 1;
		//mask – 1为和num二进制位等长的所有位数为1的数，与num取^可以得到和num相反的数字
		while (temp){
			temp >>= 1;//temp=temp >> 1（计算 temp 右移一位的值，并把这个值赋给temp） 
			mask <<= 1;
		}
		return ((mask - 1) ^ num);
	}
};
int main(){
	Solution sol;
	cout << sol.findComplement(5) << endl;
	system("pause");
	return 0;
}