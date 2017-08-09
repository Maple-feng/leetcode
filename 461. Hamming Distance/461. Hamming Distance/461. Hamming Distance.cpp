#include <iostream>
using namespace std;

class Solution {
public:
	int hammingDistance(int x, int y) {
		int ret = 0, exc = x^y;
		for (int i = 0; i < 32; ++i){
			ret += (exc >> i) & 1;//每一次右移一位和1与（右移的最小位置为1则ret自加）
		}
		return ret;
	}
};

int main()
{
	int x = 1, y = 4;
	Solution sol;
	int ret=sol.hammingDistance(x, y);
	cout << ret << endl;
	system("pause");
	return 0;
}