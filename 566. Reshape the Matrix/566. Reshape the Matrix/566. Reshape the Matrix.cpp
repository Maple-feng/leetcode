#include <iostream>
#include <vector>
using namespace std;
//������vector�����з��Ÿ�С��vector��������vector����ŵ���int�͵����֡�
//������������Ҫ������vector������ֵ��
//Ȼ���ٰ�����vector��ΪԪ�ز��뵽����vector�С�
class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		//ԭ�����У���
		int origin_r = nums.size();//�еĸ���
		int origin_c = nums[0].size();//�еĸ���
		int n = origin_c*origin_r;//Ԫ�ظ���
		if (n == r*c) {
			//�¾���
			vector<vector<int>> newMaxtrix(r, vector<int>(c, 0));
			for (int i = 0; i < n; i++)//����n/��Ҫ������cΪ��������nȡ��c��������
				newMaxtrix[i / c][i%c] = nums[i / origin_c][i%origin_c];
			return newMaxtrix;
		}
		else
			return nums;//һά�ķ�������
	}
};
int main(){
	int r = 1, c = 4;
	int temp;
	Solution sol;
	vector<vector<int>> vec;
	vector<int> v;
	for (int i = 0; i<2; i++) {
		v.clear(); //ÿ�μǵ�clear:)
		for (int j = 0; j < 2; j++)
		{
			cin >> temp;
			v.push_back(temp);
		}
		vec.push_back(v);//һά����vector���ά����vector�е���
	}
	vector<vector<int>>ret;
	ret = sol.matrixReshape(vec, r, c);
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cout << ret[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}