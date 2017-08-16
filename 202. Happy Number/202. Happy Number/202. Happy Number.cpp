#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
	bool isHappy(int n) {
		unordered_map<int, bool> map;
		int sum = Helper(n);
		while (sum != 1)
		{
			if (map[sum] == true){
				return false;
			}
			map[sum] = true;
			sum = Helper(sum);
		}
		return true;
	}
	int Helper(int n)
	{// sum of the squares of its digits
		int ret = 0;
		while (n)
		{
			int digit = n % 10;
			n /= 10;
			ret += (digit*digit);
		}
		return ret;
	}
};

int main(){
	Solution sol;
	int n = 19;
	cout << sol.isHappy(n) << endl;
	system("pause");
	return 0;
}