#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());//ÐèÒªÅÅÐò
		int i = 0;
		for (; i < nums.size(); ++i){
			if (i != nums[i]){
				return i;
			}
		}
		return i;
	}
};

int main(){
	Solution sol;
	int a[] = { 0 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.missingNumber(vec) << endl;
	system("pause");
	return 0;
}