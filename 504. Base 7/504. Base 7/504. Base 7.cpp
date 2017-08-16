#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	string convertToBase7(int num) {
		if (num == 0){
			return "0";
		}
		vector<char> vec;//��Ϊnum % 7 + '0' - 0��char���ͣ����Զ���char��
		bool isnegative = false;
		if (num < 0) {//����
			num = -num;
			isnegative = true;
		}
		while (num > 0) {//����ת��
			vec.push_back(num % 7 + '0' - 0);
			num /= 7;
		}
		if (isnegative){//����
			vec.push_back('-');
		}
		return string(vec.rbegin(), vec.rend());//���������,char��string��ת��
	}
};

int main(){
	Solution sol;
	int num = 100;
	string ret = sol.convertToBase7(num);
	cout << ret << endl;
	system("pause");
	return 0;
}