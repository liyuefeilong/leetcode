#include <algorithm>
#include "solution.h"
using namespace std;

int main()
{
	int removeTime = 5; // ����������ÿ��Ԫ������ظ��Ĵ���
	int a[100];         // ����һ�����100��Ԫ�ص�����
	int n = 100;
	for (int i = 0; i < n; i++)
		a[i] = rand() % 20 - 5;
	sort(a, a + 100); // Ҫ����ִ���㷨֮ǰ�����Ѿ�������
	cout << "ԭʼ���飺";
	for (int j = 0; j < n; j++)
		cout << a[j] << " ";
	cout << endl << endl;

	Solution remove;
	int result_num;
	result_num = remove.RemoveDuplicatesII(a, n, removeTime);

	for (int k = 0; k < result_num; k++) // ����a��ǰresult_num��Ԫ���Ǵ�����Ԫ��
		cout << a[k] << " ";
	cout << endl;
	cout << "ɾ���ظ�����" << removeTime << "�ε����ݺ�����ʣ��" << result_num << "��Ԫ��" << endl;

	getchar();
	return 0;
}