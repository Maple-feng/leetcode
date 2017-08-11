#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {//≈≈–Ú∫Û≈–∂œ
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		return s == t;
	}
};

int main(){
	Solution sol;
	string s = "anagram";
	string t = "nagaram";
	cout << sol.isAnagram(s, t) << endl;
	system("pause");
	return 0;
}