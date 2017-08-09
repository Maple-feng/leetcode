#include <iostream>
#include <vector>
using namespace std;
#define min(x,y) ((x>y)?y:x)
class Solution {
public:
	int maxCount(int m, int n, vector<vector<int>>& ops) {
		//ops中最小的整数值就会是最大矩阵部分的大小
		int lens = ops.size();
		if (lens == 0)   return n*m;
		int min_a = 40000, min_b = 40000;
		for (int i = 0; i < lens; ++i){
			int a = ops[i][0], b = ops[i][1];
			min_a = min(min_a, a);//取值
			min_b = min(min_b, b);
		}
		int count = min_a * min_b;
		return count;
	}
};

int main(){
	Solution sol;
	int m = 3, n = 3;
	vector<vector<int> > ops;
	int a[] = { 2, 2 };
	int b[] = { 3, 3 };
	vector<int> vec1(a, a + sizeof(a) / sizeof(int));
	vector<int> vec2(b, b + sizeof(b) / sizeof(int));
	ops.push_back(vec1);
	ops.push_back(vec2);
	cout << sol.maxCount(m, n, ops) << endl;
	system("pause");
	return 0;
}