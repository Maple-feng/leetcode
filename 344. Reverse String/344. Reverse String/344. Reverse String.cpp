#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string reverseString(string s) {
		for (int i = 0; i<s.size()/2; ++i){
			char tmp = s[i];
			s[i] = s[s.size() - 1 - i];
			s[s.size() - 1 - i] = tmp;
		}
		return s;
	}
};

int main(){
	Solution sol;
	string str = "hello";
	cout << sol.reverseString(str) << endl;
	system("pause");
	return 0;
}