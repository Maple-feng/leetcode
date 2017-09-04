#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int cnt = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] == val)
				cnt++;
			else
				nums[i - cnt] = nums[i];//λ�ü�ȥ��Ӧ�����Ϳ�����
		}
		return nums.size() - cnt;
	}
};

int main(){
	Solution sol;
	int a[] = { 3, 2, 2, 3 };
	int val = 3;
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.removeElement(vec, val) << endl;
	system("pause");
	return 0;
}