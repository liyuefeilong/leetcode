#include "Solution.h"
#include <algorithm>

int main()
{
	int Elem = 5; // ɾ����������ֵΪ5��Ԫ��
	int length = 100;  // �����С
	int A[100];
	for (int i = 0; i < length; i++)
		A[i] = rand() % 20 - 10;

	sort(A, A + length);  // ���ڹ۲죬�����������Ƚ�������

	cout << "�������鳤��Ϊ��" << length << endl;
	cout << "��������Ϊ��" << endl;
	for (int j = 0; j < 100; j++)
		cout << A[j] << " ";
	cout << endl << endl;

	cout << "ɾ����ֵΪ��" << Elem << "��Ԫ��" << endl << endl;

	Solution s;
	int result = s.RemoveElement(A, 100, Elem);

	cout << "�������鳤��Ϊ��" << result << endl;
	cout << "�������Ϊ��" << endl;
	for (int k = 0; k < result; k++)
	{
		cout << A[k] << " ";
	}
	cout << endl;

	getchar();
	return 0;
}