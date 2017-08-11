#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& nums) {
		vector<int> rank;
		for (int i = 0; i < nums.size(); ++i) rank.push_back(i);
		{
			sort(rank.begin(), rank.end(), [&](int a, int b){return nums[a] > nums[b]; });
			//sort()函数系在一起，自定义顺序情况
		}
		vector<string> ret(nums.size());

		for (int i = 3; i<nums.size(); ++i){
			ret[rank[i]] = to_string(i + 1);//数字变字符串
		}

		if (nums.size() > 0) {
			ret[rank[0]] = "Gold Medal";
		}
		if (nums.size() > 1) {
			ret[rank[1]] = "Silver Medal";
		}
		if (nums.size() > 2) {
			ret[rank[2]] = "Bronze Medal";
			}
		return ret;
	}
};
int main(){
	Solution sol;
	int a[] = { 5, 4, 3, 2, 1 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	vector<string> ret;
	ret = sol.findRelativeRanks(vec);
	for (int i = 0; i < ret.size(); ++i){
		cout << ret[i] <<endl;
	}
	system("pause");
	return 0;
}