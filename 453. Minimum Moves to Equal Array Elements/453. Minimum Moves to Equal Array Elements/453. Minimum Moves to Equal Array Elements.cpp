#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	//�����ٵĲ����ǵ����е�������ͬ��ÿ��n-1��Ԫ�ؼ�1��
	//�۲����ӿ��Կ���ÿ���ǵĲ�������n-1�����ּ�1��
	//��ôת����������ÿ��ʹ�����Ǹ����ּ�1������Ϊ���ǵ�����һ�£�
	//���е����ֶ���Ȼ�������С���Ǹ����֡�
	int minMoves(vector<int> &nums){
		int min = nums[0];
		int sum = nums[0];
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i] < min) {
				min = nums[i];
			}
			sum += nums[i];
		}
		return sum - min * nums.size();//��С�����ֺ����кͲ����
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 2, 3 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.minMoves(vec) << endl;
	system("pause");
	return 0;
}