#include <iostream>

using namespace std;
class Solution {
public:
	int findComplement(int num) {
		int temp = num, mask = 1;
		//mask �C 1Ϊ��num������λ�ȳ�������λ��Ϊ1��������numȡ^���Եõ���num�෴������
		while (temp){
			temp >>= 1;//temp=temp >> 1������ temp ����һλ��ֵ���������ֵ����temp�� 
			mask <<= 1;
		}
		return ((mask - 1) ^ num);
	}
};
int main(){
	Solution sol;
	cout << sol.findComplement(5) << endl;
	system("pause");
	return 0;
}