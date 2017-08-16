#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
	{
		sort(nums1.begin(), nums1.end());//≈≈–Ú
		sort(nums2.begin(), nums2.end());
		vector<int> ret;
		for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();)
		{
			if (nums1[i] == nums2[j])
			{
				ret.push_back(nums1[i]);
				i++;
				j++;
			}
			else if (nums1[i] < nums2[j])
				i++;
			else if (nums1[i] > nums2[j])
				j++;
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
	ret = sol.intersect(vec1,vec2);
	for (auto i : ret){
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}