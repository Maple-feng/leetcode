#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
	//利用hash表
	int distributeCandies(vector<int>& candies) {
		if (candies.size() % 2 != 0)//非偶数返回
			return 0;
		unordered_map<int, int> HASH;
		//定义unordered_map<int, int> HASH，定义一个整数res存储妹妹能得到糖果的种类
		int res = 0;
		for (int c : candies){
			HASH[c]++;
			if (HASH[c] == 1 && res < candies.size() / 2)
				//数量等于1且res小于数组长度的一半，res++
				res++;
		}
		return res;
	}
};
int main(){
	Solution sol;
	int a[]= { 1, 1, 2, 2, 3, 3 };
	vector<int> vec(a, a + sizeof(a)/sizeof(int));
	int ret = sol.distributeCandies(vec);
	cout << ret << endl;
	system("pause");
	return 0;
}