// ���Դ���
#include "solution.h"
using namespace std;

int main()
{
	int num = 100;

	vector<int> number(100);
	for (int i = 1; i < num; i++)
		number.push_back(rand() % 100 - 30); // �������һ������

	vector<vector<int>> result;
	solution Sum;
	result = Sum.threeSum(number);  // ִ���㷨�����ؽ����result

	// ����Ԫ��,result�Ƕ�ά�ģ���ʹ�ö��forѭ��

	cout << "�������ĺ�Ϊ�������У�" << endl;

	for (vector<vector<int>>::size_type i = 0; i < result.size(); i++)
	{
		for (vector<int>::size_type j = 0; j < result[i].size(); j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	getchar();
	return 0;
}