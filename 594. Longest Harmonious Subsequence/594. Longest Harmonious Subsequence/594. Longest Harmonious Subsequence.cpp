#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
	int findLHS(vector<int>& nums) {
		sort(nums.begin(), nums.end());//������
		int len = nums.size();//����nums�ĳ��ȣ����Ϊ0ֱ�ӷ���0
		if (len<1){
			return 0;
		}
		map<int, int> res;
		for (int i = 0; i<len; ++i){//���������ŵ�һ��map���ÿ�������ֵĴ���֪����
			res[nums[i]]++;
		}
		map<int, int>::iterator iter1 = res.begin();
		//iter1�ӵ�һ��Ԫ�ؿ�ʼ��iter2�ӵڶ�����ʼ
		map<int, int>::iterator iter2 = iter1;
		++iter2;
		int ret = 0;
		for (; iter2 != res.end(); iter1++, iter2++){
			if (res.count(iter1->first + 1)){
				//���ǰһ��mapԪ�ض�Ӧ��first��ֵ+1��Ҳ��map����
				ret = max(ret, iter1->second + iter2->second);
				//��ôret��ȡret����������mapԪ�ص�second
				//��Ϊsecond�������������ֵĴ���
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