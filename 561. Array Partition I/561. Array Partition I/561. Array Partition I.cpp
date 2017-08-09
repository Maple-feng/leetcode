#include <iostream>
#include <array>
#include <vector>
using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		vector<int>::size_type nsize = nums.size();//���������С
		if (nsize == 0){//�����СΪ0��ֱ�ӷ���0
			return 0;
		}
		sort(nums.begin(), nums.end());//����
		int sum = 0;
		for (int i = 0; i < nsize; i += 2){//��������һ���У���С���Ǹ����ͼ�Ϊ���
			sum += nums[i];
		}
		return sum;
	}
};

int main()
{
	int a[4] = { 1, 6, 5, 2 };
	vector<int> arr(a, a + 4);
	Solution sol;
	int ret = sol.arrayPairSum(arr);
	cout << ret << endl;
	system("pause");
	return 0;
}