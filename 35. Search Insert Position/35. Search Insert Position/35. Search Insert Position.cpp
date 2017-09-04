#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int len = nums.size() - 1;
		int low = 0;
		int high = len - 1;
		int mid;
		while (low <= high)//标准二分查找  
		{
			mid = low + (high - low) / 2;
			if (nums[mid] == target)
				return mid;//找到元素  
			else if (nums[mid] > target)
				high = mid - 1;
			else
				low = mid + 1;
		}
		//没找到时判断与nums[low]的关系  
		if (target > nums[low])
			return low + 1;
		else
			return low;
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 3, 5, 6 };
	int target = 2;
	vector<int> vec(a,a+sizeof(a)/sizeof(int));
	cout << sol.searchInsert(vec, target) << endl;
	system("puase");
	return 0;
}