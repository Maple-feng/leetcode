#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
	int findLHS(vector<int>& nums) {
		sort(nums.begin(), nums.end());//先排序
		int len = nums.size();//计算nums的长度，如果为0直接返回0
		if (len<1){
			return 0;
		}
		map<int, int> res;
		for (int i = 0; i<len; ++i){//将所有数放到一个map里，即每个数出现的次数知道了
			res[nums[i]]++;
		}
		map<int, int>::iterator iter1 = res.begin();
		//iter1从第一个元素开始，iter2从第二个开始
		map<int, int>::iterator iter2 = iter1;
		++iter2;
		int ret = 0;
		for (; iter2 != res.end(); iter1++, iter2++){
			if (res.count(iter1->first + 1)){
				//如果前一个map元素对应的first的值+1，也在map中有
				ret = max(ret, iter1->second + iter2->second);
				//那么ret就取ret和连着两个map元素的second
				//因为second存的是这个数出现的次数
			}                                                 
		}
		return ret;
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 3, 2, 2, 5, 2, 3, 7 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.findLHS(vec) << endl;
	system("pause");
	return 0;
}