#include "solution.h"
using namespace std;

int main()
{
	solution a;
	int size = 200;  // ���ݵĸ���
	vector<int> num(size);  // ���ڴ�����ݵ�����
	vector<vector<int> > result;  // ����㷨�����н��
	for (int i = 0; i < size; i++)
		num.push_back(rand() % 30 - 20); // �����������

	int target = 0;
	result = a.fourSum(num, target);

	for (vector<vector<int> >::size_type j = 0; j < result.size(); j++)
	{
		for (vector<int>::size_type k = 0; k < result[j].size(); k++)
		{
			cout << result[j][k] << " ";
		}
		cout << endl;
	}

	getchar();
	return 0;
}