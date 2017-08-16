#include <iostream>
using namespace std;

class Solution {
public:
	bool isPowerOfThree(int n) {
		if (n > 0) {
			return 1162261467 % n == 0;
			//int范围的3的n次幂是int范围最大的3的n次幂数
			//(即3^((int)log3(MAXINT)) =  1162261467)的约数
		}
		else {
			return false;
		}
	}
};

int main(){
	Solution sol;
	int n = 27;
	cout << sol.isPowerOfThree(n) << endl;
	system("pause");
	return 0;
}