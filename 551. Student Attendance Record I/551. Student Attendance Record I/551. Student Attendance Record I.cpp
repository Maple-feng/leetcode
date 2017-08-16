#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool checkRecord(string s) {
		int cntA = 0, cntL = 0;
		for (char c : s) {
			if (c == 'A') {
				if (++cntA > 1) {
					return false;
				}
				cntL = 0;//不连续L数目清零
			}
			else if (c == 'L') {
				if (++cntL > 2) {
					return false;
				}
			}
			else {
				cntL = 0;//不连续L数目清零
			}
		}
		return true;
	}
};

int main(){
	Solution sol;
	string s = "PPALLL";
	cout << sol.checkRecord(s) << endl;
	system("pause");
	return 0;
}