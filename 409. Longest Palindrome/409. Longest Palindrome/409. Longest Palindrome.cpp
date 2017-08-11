#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
	//����һ��ֻ������Сд��ĸ���ַ�����������Щ��ĸ��ɵ�����Ĵ��Ƕ೤
	int longestPalindrome(string s) {
		unordered_map<char, int> hash;
		for (auto i : s) {
			hash[i]++;//ͳ����ĸ����
		}
		int ans = 0, odd = 0;
		for (auto val : hash)
		{
			if (val.second & 1) {//�������λ�Ƿ�Ϊ1
				odd = 1;
			}
			ans += val.second & 0xfffffffe;//�ж�������λ
		}
		return ans + odd;//���������������м䣬ż�������߼���
	}
};

int main(){
	Solution sol;
	string str = "abccccdd";
	cout << sol.longestPalindrome(str) << endl;
	system("pause");
	return 0;
}