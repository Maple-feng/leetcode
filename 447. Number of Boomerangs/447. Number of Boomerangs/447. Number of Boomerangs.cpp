#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int numberOfBoomerangs(vector<pair<int, int>>& points) {
		int len = points.size(), res = 0;
		unordered_map<int, int> m;
		//以每一个点为端点时，与其余点共组成多少种不同的距离，
		//此处用map记录，key为距离长度，value为距离出现次数
		for (int i = 0; i < len; ++i) {
			for (int j = 0; j < len; ++j) {
				int x = points[i].first - points[j].first;
				int y = points[i].second - points[j].second;
				m[x * x + y * y]++;
			}
			//其他点到这个点的距离(first是距离的平方，second是次数)

			unordered_map<int, int> ::iterator it;
			for (it = m.begin(); it != m.end(); ++it) {
				if (it->second >= 2){//必有三个点距离相等
					int tmp = it->second;
					res += tmp * (tmp - 1);//排列组合问题一定是n(n-1)
				}
			}
			m.clear();
		}
		return res;
	}
};

int main(){
	Solution sol;
	vector<pair<int, int>> vec;
	pair<int, int> p1 = { 0, 0 };
	pair<int, int> p2 = { 1, 0 };
	pair<int, int> p3 = { 2, 0 };
	vec.push_back(p1);
	vec.push_back(p2);
	vec.push_back(p3);
	cout << sol.numberOfBoomerangs(vec) << endl;
	system("pause");
	return 0;
}