#include <iostream>
using namespace std;

class Solution {
public:
	bool canWinNim(int n) {
		return n % 4 != 0;//ֻҪ������ʣ4������Ӯ��
	}
};

int main(){
	Solution sol;
	int n=4;
	cout << sol.canWinNim(n) << endl;
	system("pause");
	return 0;
}