#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int>& numbers, int target)
	{
		vector<int> ret;
		int i = 0;
		int j = numbers.size() - 1;
		while (i != j)
		{
			if (numbers[i] + numbers[j] == target)
			//相等情况
			{
				ret.push_back(i + 1);
				ret.push_back(j + 1);
				break;
			}
			else if (numbers[i] + numbers[j] > target)
			//大于情况，分大于小于情况可以避免重复输出
			{
				--j;
			}
			else//小于情况
			{
				++i;
			}
		}
		return ret;
	}
};

int main(){
	Solution sol;
	int a[] = { -1,0 };
	int target = -1;
	vector<int> numbers(a, a + sizeof(a) / sizeof(int));
	vector<int> ret;
	ret = sol.twoSum(numbers, target);
	for (auto i : ret){
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}