#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {

		int length = nums.size();
		int result = 0;
		for (int i = 0; i < length; ++i)
		{
			result ^= nums[i];//����������㣬�������ҵ�������һ�ε�Ԫ��
		}
		return result;
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 2, 1 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.singleNumber(vec) << endl;
	system("pause");
	return 0;
}