#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int iCounter = 0;
		for (int i = 0; i<nums.size(); i++){
			if (nums[i] == 0){
				iCounter++;
			}
			else{
				nums[i - iCounter] = nums[i];
				//若不是等于0的，则用下标-数量就可以准确定位
			}
		}

		for (int i = (nums.size() - iCounter); i<nums.size(); i++){
			nums[i] = 0;
		}
	}
};

int main(){
	Solution sol;
	int a[] = { 0, 1, 0, 3, 12 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	sol.moveZeroes(vec);
	for (int i = 0; i < vec.size(); ++i){
		cout << vec[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}