#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int maxProfit(vector<int> &prices) {
		int ret = 0;
		for (int i = 1; i < prices.size(); ++i) {
			int delta = prices[i] - prices[i - 1];
			if (delta > 0) {
				ret += delta;//��ǰһ���۸�Ⱥ�һ���۸�С��Ҳ����ӯ����ʱ�����һ�𷵻�
			}
		}
		return ret;
	}
};

int main(){
	Solution sol;
	int a[] = { 5, 1, 2, 3, 4 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.maxProfit(vec) << endl;
	system("pause");
	return 0;
}