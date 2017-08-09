#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool detectCapitalUse(string word) {
		if (word.length() <= 1) return true;
		if (islower(word[0]) || (isupper(word[0]) && islower(word[1]))) {
			//第一个字母是小写，或者是大写，第二个字母是小写
			for (int i = 1; i < word.length(); i++)
				if (isupper(word[i])) return false;
			    //如果第二个字母之后有一个是大写则是false
		}
		else {//第一个字母是小写，或者是大写，第二个字母是大写
			for (int i = 1; i < word.length(); i++)
				if (islower(word[i])) return false;
			    //如果第二个字母之后有一个是小写则是false
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