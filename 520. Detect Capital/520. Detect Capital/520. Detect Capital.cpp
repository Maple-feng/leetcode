#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool detectCapitalUse(string word) {
		if (word.length() <= 1) return true;
		if (islower(word[0]) || (isupper(word[0]) && islower(word[1]))) {
			//��һ����ĸ��Сд�������Ǵ�д���ڶ�����ĸ��Сд
			for (int i = 1; i < word.length(); i++)
				if (isupper(word[i])) return false;
			    //����ڶ�����ĸ֮����һ���Ǵ�д����false
		}
		else {//��һ����ĸ��Сд�������Ǵ�д���ڶ�����ĸ�Ǵ�д
			for (int i = 1; i < word.length(); i++)
				if (islower(word[i])) return false;
			    //����ڶ�����ĸ֮����һ����Сд����false
		}
		return true;
	}
};

int main(){
	Solution sol;
	string word = "USA";
	cout << sol.detectCapitalUse(word) << endl;
	system("pause");
	return 0;
}