#include <iostream>
using namespace std;

class Solution {
public:
	bool canWinNim(int n) {
		return n % 4 != 0;//只要给对手剩4个就是赢得
	}
};

int main(){
	Solution sol;
	int n=4;
	cout << sol.canWinNim(n) << endl;
	system("pause");
	return 0;
}