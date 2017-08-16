#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {//每次可以爬上1或2级。有多少种不同的方式到达顶端？
		//f(n)=f(n-1)+f(n-2)。自底向上
		vector<int> a(n+1);
		a[0] = 1;
		a[1] = 1;
		for (int i = 2; i <= n; ++i)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		return a[n];
	}
};

int main(){
	Solution sol;
	int n = 1;
	cout << sol.climbStairs(n) << endl;
	system("pause");
	return 0;
}