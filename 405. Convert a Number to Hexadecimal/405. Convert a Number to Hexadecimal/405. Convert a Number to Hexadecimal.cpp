#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string toHex(int num) {
		string hexString;
		string hexChar = "0123456789abcdef";

		while (num) {
			cout << hexChar[num & 0xF] << endl;
			hexString = hexChar[num & 0xF] + hexString;
			num = (unsigned)num >> 4;//右移,不然-1位数不够
		}
		return hexString.empty() ? "0" : hexString;
	}
};

int main(){
	Solution sol;
	int num = -1;
	cout << sol.toHex(num) << endl;
	system("pause");
	return 0;
}