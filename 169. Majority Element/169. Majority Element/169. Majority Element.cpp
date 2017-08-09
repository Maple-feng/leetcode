#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> cnt;//ÿ���ؼ���ֻ����map�г���һ�Σ��ڶ�����֮Ϊ�ùؼ��ֵĶ�Ӧֵ��
		int n = nums.size() / 2;
		for (auto num : nums){
			cnt[num]++;
		}
		for (auto num : cnt){
			if (num.second > n){
				return num.first;
			}
		}
	}
};

int main(){
	Solution sol;
	int a[] = { 1 ,1,1,1,0,0,0,1,1,1};
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.majorityElement(vec) << endl;
	system("pause");
	return 0;
}