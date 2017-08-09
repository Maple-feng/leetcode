#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int ret = 0;
		int max = 0;
		for (int i = 0; i < nums.size(); ++i){
			if (nums[i] == 1){
				++ret;
				if (ret > max){
					max = ret;
				}
			}
			else{
				ret = 0;
			}
		}
		return max;
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 0, 1, 1, 0, 1 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.findMaxConsecutiveOnes(vec) << endl;
	system("pause");
	return 0;
}