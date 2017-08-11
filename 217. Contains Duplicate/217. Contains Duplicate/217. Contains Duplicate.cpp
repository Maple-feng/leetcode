#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		map<int, int> map;
		for (auto i : nums){
			map[i]++;
		}
		if (nums.size()>map.size()){//map�����ظ�����һ�������ظ�˵��nums���ȴ���map
			return true;
		}
		else{
			return false;
		}
	}
};

int main(){
	Solution sol;
	int a[] = {1,2,2};
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.containsDuplicate(vec) << endl;
	system("pause");
	return 0;
}