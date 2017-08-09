#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	//用最少的步骤是的所有的数字相同，每次n-1个元素加1，
	//观察例子可以看出每次是的不是最大的n-1个数字加1，
	//那么转换过来就是每次使最大的那个数字减1，所以为了是的数组一致，
	//所有的数字都必然会减到最小的那个数字。
	int minMoves(vector<int> &nums){
		int min = nums[0];
		int sum = nums[0];
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i] < min) {
				min = nums[i];
			}
			sum += nums[i];
		}
		return sum - min * nums.size();//最小的数字和所有和差多少
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 2, 3 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.minMoves(vec) << endl;
	system("pause");
	return 0;
}