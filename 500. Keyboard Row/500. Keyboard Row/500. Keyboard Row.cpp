#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		unordered_set <char> row1 = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p' };
		unordered_set <char> row2 = { 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l' };
		unordered_set <char> row3 = { 'z', 'x', 'c', 'v', 'b', 'n', 'm' };
		vector<string> out;
		for (auto &elem : words)//C++11��Python forѭ������
		{//ȡ��ÿһ���ַ���
			bool d1 = true, d2 = true, d3 = true;
			for (auto &key : elem)//�ж�ÿ���ַ�����ÿ��Ԫ��
			{
				if (d1)//�ж��ڲ��ڵ�һ��,����һ���ڵ�һ�У�������Ϊfalse�������ж�
				{
					auto re = row1.find(tolower(key));//tolower(key)ת����Сд
					if (re == row1.end())
						d1 = false;
				}
				if (d2)//�ж��ڲ��ڵڶ���
				{
					auto re = row2.find(tolower(key));
					if (re == row2.end())
						d2 = false;
				}
				if (d3)//�ж��ڲ��ڵ�����
				{
					auto re = row3.find(tolower(key));
					if (re == row3.end())
						d3 = false;
				}

			}
			if (d1 || d2 || d3)//���������붯̬����
				out.push_back(elem);
		}

		return out;
	}
};

int main(){
	Solution sol;
	string str[4] = { "Hello", "Alaska", "Dad", "Peace" };
	vector<string> vec(str, str + 4);
	vector<string> ret = sol.findWords(vec);
	for (int i = 0; i<ret.size(); i++)
	{
		cout << ret[i] << endl;
	}
	system("pause");
	return 0;
}