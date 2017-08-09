#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
	{
		// ������1�������� 
		sort(nums1.begin(), nums1.end());
		// ������2��������
		sort(nums2.begin(), nums2.end());
		vector<int> ret;
		int mark;
		// ������������1������2���бȽϣ�������յĽ������ 
		for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();)
		{
			if (nums1[i] < nums2[j])
				++i;
			else if (nums1[i] > nums2[j])
				++j;
			else if (nums1[i] == nums2[j])
			{
				if (ret.size() == 0 || nums1[i] != mark)//��Ҫ�ظ�����
				{
					ret.push_back(nums1[i]);
					mark = nums1[i];
				}
				++i;
				++j;
			}
		}
		return ret;
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 2, 2, 1 };
	int b[] = { 2, 2 };
	vector<int> vec1(a, a + sizeof(a) / sizeof(int));
	vector<int> vec2(b, b + sizeof(b) / sizeof(int));
	vector<int> ret;
	ret = sol.intersection(vec1, vec2);
	for (int i = 0; i < ret.size(); ++i){
		cout << ret[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}