#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {
		sort(g.begin(), g.end());//���򣬱�֤���ᡰ�˷ѡ�������
		sort(s.begin(), s.end());
		int ret = 0;
		for (int i = 0, j = 0; i < g.size() && j < s.size(); ++j) {
			if (g[i] <= s[j]) {
				ret++;
				i++;//�����������ȡ��һ��ֵ
			}
		}
		return ret;
	}
};

int main(){
	Solution sol; 
	int a[] = { 1, 2, 3 };
	int b[] = { 1, 1 };
	vector<int> vec1(a, a + sizeof(a) / sizeof(int));
	vector<int> vec2(b, b + sizeof(b) / sizeof(int));
	cout << sol.findContentChildren(vec1, vec2) << endl;
	system("pause");
	return 0;
}