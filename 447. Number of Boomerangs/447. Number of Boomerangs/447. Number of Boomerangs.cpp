#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int numberOfBoomerangs(vector<pair<int, int>>& points) {
		int len = points.size(), res = 0;
		unordered_map<int, int> m;
		//��ÿһ����Ϊ�˵�ʱ��������㹲��ɶ����ֲ�ͬ�ľ��룬
		//�˴���map��¼��keyΪ���볤�ȣ�valueΪ������ִ���
		for (int i = 0; i < len; ++i) {
			for (int j = 0; j < len; ++j) {
				int x = points[i].first - points[j].first;
				int y = points[i].second - points[j].second;
				m[x * x + y * y]++;
			}
			//�����㵽�����ľ���(first�Ǿ����ƽ����second�Ǵ���)

			unordered_map<int, int> ::iterator it;
			for (it = m.begin(); it != m.end(); ++it) {
				if (it->second >= 2){//����������������
					int tmp = it->second;
					res += tmp * (tmp - 1);//�����������һ����n(n-1)
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