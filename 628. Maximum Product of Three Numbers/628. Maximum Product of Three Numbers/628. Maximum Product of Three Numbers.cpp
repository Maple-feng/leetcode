#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Solution {
public:
	int maximumProduct(vector<int>& nums) {
		int n = nums.size();
		if (n < 3){
			return -1;
		}
		//sort(nums.begin(), nums.end());
		//��������sort(nums.begin(), nums.end(),less<int>());
		sort(nums.begin(), nums.end(), greater<int>());//�������� ͷ�ļ�#include <functional>
		//�ֱ�����ǰ���������������Լ�����������һ����ǰ���������һ��
		int s = nums[n - 1] * nums[n - 2] * nums[n - 3];
		s = max(s, nums[n - 1] * nums[n - 2] * nums[0]);
		s = max(s, nums[n - 1] * nums[1] * nums[0]);
		s = max(s, nums[2] * nums[1] * nums[0]);
		return s;
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 2, 3, 4 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.maximumProduct(vec) << endl;
	system("pause");
	return 0;
}