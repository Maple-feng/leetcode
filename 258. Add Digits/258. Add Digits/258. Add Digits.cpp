#include <iostream>
using namespace std;

class Solution {
public:
	int addDigits(int num) {
		while (num >= 10){
			num = (num / 10) + num % 10;
		}
		return num;
	}
};

int main(){
	Solution sol;
	int num = 38;
	cout << sol.addDigits(num) << endl;
	system("pause");
	return 0;
}