#include <iostream>
using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {//������λΪ1�������λ��Ϊ0.---n & n-1 == 0
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