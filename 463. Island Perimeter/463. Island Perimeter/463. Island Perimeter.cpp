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
					//�߽�Ϊ���ϱߣ������ϱ�Ϊ0
					if (i == n - 1 || grid[i + 1][j] == 0) permeter++;
					//�߽�Ϊ���±ߣ������±�Ϊ0
					if (j == 0 || grid[i][j - 1] == 0) permeter++;
					//�߽�Ϊ����ߣ��������Ϊ0
					if (j == m - 1 || grid[i][j + 1] == 0) permeter++;
					//�߽�Ϊ���ұߣ������ұ�Ϊ0
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
		v.clear(); //ÿ�μǵ�clear:)
		for (int j = 0; j < 4; ++j)
		{
			cin >> temp;
			v.push_back(temp);
		}
		vec.push_back(v);//һά����vector���ά����vector�е���
	}
	cout << sol.islandPerimeter(vec) << endl;
	system("pause");
	return 0;
}