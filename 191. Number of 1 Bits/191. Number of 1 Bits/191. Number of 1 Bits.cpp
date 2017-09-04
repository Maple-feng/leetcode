#include <stdint.h>
#include <iostream>
using namespace std;

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int count = 0;
		while (n != 0){
			count = count + (n & 1);
			n = n >> 1;
		}
		return count;
	}
};

int main(){
	Solution sol;
	uint32_t n = 11;
	cout << sol.hammingWeight(n) << endl;
	system("pause");
	return 0;
}