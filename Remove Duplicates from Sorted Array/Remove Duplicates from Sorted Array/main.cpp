#include "solution.h"
#include <algorithm>

int main()
{
	int num = 50;
	int number[50];
	
	for (int i = 0; i < num; i++)
		number[i] = rand() % 10 - 10;
	sort(number, number + num); // �ȶ������������
	cout << "��������飨�����򣩣�" << endl;
	for (int j = 0; j < num; j++)
		cout << number[j] << " ";
	cout << endl << endl;

	Solution remove;
	int index = remove.removeDuplicates(number, num); // ִ���㷨

	cout << "ȥ���ظ�Ԫ�غ�����飺" << endl;
	for (int k = 0; k <index; k++)
		cout << number[k] << " ";
	cout << endl;
	cout << "����Ԫ�ص�ʣ�������" << index << endl;
	getchar();
	return 0;
}
