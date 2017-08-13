#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<string> readBinaryWatch(int num) {
		vector<string> ans;
		for (int i = max(0, num - 6); i <= min(4, num); i++)
		{
			vector<int> vec1, vec2;
			DFS(4, i, 0, 0, vec1), DFS(6, num - i, 0, 0, vec2);
			for (auto val1 : vec1)
				for (auto val2 : vec2)
				{
				string str = (to_string(val2).size() == 1 ? "0" : "") + to_string(val2);
				ans.push_back(to_string(val1) + ":" + str);
				}
		}
		return ans;
	}
	//��������������Ȼ�����Щ���ĵ�ö�ٷָ�Сʱ�ͷ��ӣ���Ҫע����Ǽ�֦��
	//��Сʱ����С�ڣ���������С�ڣ�����Ȼ��Сʱ�ͷ�����ϼ��ɣ�
	//����һ����Ҫע������������ֻ�У�λ������Ҫ������
	void DFS(int len, int k, int curIndex, int val, vector<int>& vec)
	{
		if (k == 0 && len == 4 && val < 12) vec.push_back(val);
		if (k == 0 && len == 6 && val < 60) vec.push_back(val);
		if (curIndex == len || k == 0) return;
		DFS(len, k, curIndex + 1, val, vec);
		val += pow(2, curIndex), k--, curIndex++;
		DFS(len, k, curIndex, val, vec);
	}
};

int main(){
	Solution sol;
	int num = 1;
	vector<string> ret;
	ret = sol.readBinaryWatch(num);
	for (auto i : ret){
		cout << i << endl;
	}
	system("pause");
	return 0;
}