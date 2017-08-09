#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		int permeter = 0;
		int n = grid.size();
		int m = grid[0].size();
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (grid[i][j] == 1){
					if (i == 0 || grid[i - 1][j] == 0) permeter++;
					//边界为最上边，或者上边为0
					if (i == n - 1 || grid[i + 1][j] == 0) permeter++;
					//边界为最下边，或者下边为0
					if (j == 0 || grid[i][j - 1] == 0) permeter++;
					//边界为最左边，或者左边为0
					if (j == m - 1 || grid[i][j + 1] == 0) permeter++;
					//边界为最右边，或者右边为0
				}
			}
		}
		return permeter;
	}
};
int main(){
	Solution sol;
	vector<vector<int>> vec;
	vector<int> v;
	int temp;
	for (int i = 0; i<4; ++i) {
		v.clear(); //每次记得clear:)
		for (int j = 0; j < 4; ++j)
		{
			cin >> temp;
			v.push_back(temp);
		}
		vec.push_back(v);//一维数组vector向二维数组vector中导入
	}
	cout << sol.islandPerimeter(vec) << endl;
	system("pause");
	return 0;
}