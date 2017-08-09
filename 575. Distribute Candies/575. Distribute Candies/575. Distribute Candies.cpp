#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
	//����hash��
	int distributeCandies(vector<int>& candies) {
		if (candies.size() % 2 != 0)//��ż������
			return 0;
		unordered_map<int, int> HASH;
		//����unordered_map<int, int> HASH������һ������res�洢�����ܵõ��ǹ�������
		int res = 0;
		for (int c : candies){
			HASH[c]++;
			if (HASH[c] == 1 && res < candies.size() / 2)
				//��������1��resС�����鳤�ȵ�һ�룬res++
				res++;
		}
		return res;
	}
};
int main(){
	Solution sol;
	int a[]= { 1, 1, 2, 2, 3, 3 };
	vector<int> vec(a, a + sizeof(a)/sizeof(int));
	int ret = sol.distributeCandies(vec);
	cout << ret << endl;
	system("pause");
	return 0;
}