#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> ret;
		for (int i = 1; i <= n; ++i){
			if (i % 3 == 0){
				if (i % 5 == 0){
					ret.push_back("FizzBuzz");
				}
				else{
					ret.push_back("Fizz");
				}
			}
			else if (i % 5 == 0){
				if (i % 3 == 0){
					ret.push_back("FizzBuzz");
				}
				else{
					ret.push_back("Buzz");
				}
			}
			else{
				stringstream s;//利用stringstream类型变成string类型，头文件<sstream>
				string str;
				s << i;
				s >> str;
				ret.push_back(str);
			}
		}
		return ret;
	}
};

int main(){
	Solution sol;
	int n = 15;
	vector<string> ret = sol.fizzBuzz(n);
	for (int i = 0; i<ret.size(); i++)
	{
		cout << ret[i] << endl;
	}
	system("pause");
	return 0;
}