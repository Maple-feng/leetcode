#include <iostream>
#include <vector>
using namespace std;
//最外层的vector容器中放着更小的vector，而里层的vector里面放的是int型的数字。
//所以我们首先要对里层的vector容器赋值，
//然后再把里层的vector作为元素插入到外层的vector中。
class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		//原矩阵，行，列
		int origin_r = nums.size();//列的个数
		int origin_c = nums[0].size();//行的个数
		int n = origin_c*origin_r;//元素个数
		if (n == r*c) {
			//新矩阵
			vector<vector<int>> newMaxtrix(r, vector<int>(c, 0));
			for (int i = 0; i < n; i++)//总数n/需要的列数c为新行数，n取余c是新列数
				newMaxtrix[i / c][i%c] = nums[i / origin_c][i%origin_c];
			return newMaxtrix;
		}
		else
			return nums;//一维的返回自身
	}
};
int main(){
	int r = 1, c = 4;
	int temp;
	Solution sol;
	vector<vector<int>> vec;
	vector<int> v;
	for (int i = 0; i<2; i++) {
		v.clear(); //每次记得clear:)
		for (int j = 0; j < 2; j++)
		{
			cin >> temp;
			v.push_back(temp);
		}
		vec.push_back(v);//一维数组vector向二维数组vector中导入
	}
	vector<vector<int>>ret;
	ret = sol.matrixReshape(vec, r, c);
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cout << ret[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}