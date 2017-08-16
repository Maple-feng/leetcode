#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {//ÿ�ο�������1��2�����ж����ֲ�ͬ�ķ�ʽ���ﶥ�ˣ�
		//f(n)=f(n-1)+f(n-2)���Ե�����
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