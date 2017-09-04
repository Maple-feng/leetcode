#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int max_sum = INT_MIN;
		int sum = INT_MIN;
		for (int i = 0; i < nums.size(); ++i) {
			if (sum < 0) {
				sum = 0;
			}
			sum += nums[i];
			if (sum > max_sum){
				max_sum = sum;
			}
		}
		return max_sum;
	}
};

int main(){
	Solution sol;
	int a[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.maxSubArray(vec) << endl;
	system("pause");
	return 0;
}