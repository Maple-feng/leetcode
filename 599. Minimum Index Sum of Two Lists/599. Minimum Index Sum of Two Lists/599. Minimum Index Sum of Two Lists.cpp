#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
	vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
		vector<string> res;
		unordered_map<string, int> hash;
		int min = INT_MAX;
		for (int i = 0; i < list1.size(); ++i) {
			hash[list1[i]] = i;//<list1[i],i>
		}
		for (int i = 0; i < list2.size(); ++i) {
			if (hash.count(list2[i])) {//对应的list的下标
				int sum = i + hash[list2[i]];//list2下标和list1的下标之和
				if (sum == min) {//和，相等，情况---都输出
					res.push_back(list2[i]);
				}
				else if (sum < min) {//和,小于最小情况---替换
					min = sum;
					res = { list2[i] };
				}
			}
		}
		return res;
	}
};

int main(){
	Solution sol;
	vector < string > vec1= {"Shogun", "Tapioca Express", "Burger King", "KFC"};
	vector < string > vec2 = { "Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun" };
	vector < string > ret;
	ret = sol.findRestaurant(vec1, vec2);
	for (auto i : ret){
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}