#include <iostream>
using namespace std;

class Solution {
public:
	bool isUgly(int num) {//所有因子都是2或3或5，如果不是1，则不是丑陋数
		if (num == 0) {
			return false;
		}
		if (num == 1){
			return true;
		}
		if (num % 2 == 0) {
			return isUgly(num / 2);
		}
		else if (num % 3 == 0) {
			return isUgly(num / 3);
		}
		else if (num % 5 == 0) {
			return isUgly(num / 5);
		}
		return false;
	}
};

int main(){
	Solution sol;
	int num = 10;
	cout << sol.isUgly(num) << endl;
	system("pause");
	return 0;
}