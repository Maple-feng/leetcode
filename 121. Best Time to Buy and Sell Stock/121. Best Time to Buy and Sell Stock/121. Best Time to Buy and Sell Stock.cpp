#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int m = prices.size();
		if (m == 0)
			return 0;

		int curMin = prices[0];
		int ret = 0;
		for (int i = 1; i < m; ++i)
		{
			curMin = min(curMin, prices[i]);//找最小值
			ret = max(ret, prices[i] - curMin);//判定最小值是不是差值最大值
		}
		return ret;
	}
};

int main(){
	Solution sol;
	int a[] = { 2,4,1};
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.maxProfit(vec) << endl;
	system("pause");
	return 0;
}