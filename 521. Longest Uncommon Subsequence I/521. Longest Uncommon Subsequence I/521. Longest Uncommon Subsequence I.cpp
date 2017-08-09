#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int findLUSlength(string a, string b) {
		//ֻ��Ҫ�ж����ַ����Ƿ���ȣ������Ⱦͷ���-1������Ⱦͷ��ؽϳ����ַ������ȣ�
		int a_length = a.length();
		int b_length = b.length();
		if (a == b)
			return -1;
		else
			return a_length > b_length ? a_length : b_length;
	}
};

int main(){
	Solution sol;
	string a = "aba", b = "cdc";
	cout << sol.findLUSlength(a, b) << endl;
	system("pause");
	return 0;
}