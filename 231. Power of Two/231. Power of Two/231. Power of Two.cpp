#include <iostream>
using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {//仅有首位为1，其余各位都为0.---n & n-1 == 0
		return (n>0) && (!(n&(n - 1)));
	}
};

int main(){
	Solution sol;
	int n = 1;
	cout << sol.isPowerOfTwo(n) << endl;
	system("pause");
	return 0;
}