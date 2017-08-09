#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> constructRectangle(int area) {
		vector<int> vec;
		int w = (int)sqrt(area);//取开方
		while (area % w != 0) {//找相邻的整数
			w--;
		}
		vec.push_back(area / w);
		vec.push_back(w);
		return vec;
	}
};

int main(){
	Solution sol;
	int area = 4;
	vector<int> ret;
	ret=sol.constructRectangle(area);
	for (int i = 0; i < ret.size(); ++i){
		cout << ret[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}