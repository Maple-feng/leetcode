#include <iostream>
using namespace std;

class Solution {
public:
	bool isPowerOfThree(int n) {
		if (n > 0) {
			return 1162261467 % n == 0;
			//int��Χ��3��n������int��Χ����3��n������
			//(��3^((int)log3(MAXINT)) =  1162261467)��Լ��
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