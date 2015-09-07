#include "Solution.h"
#include <algorithm>

int main()
{
	int Elem = 5; // 删除数组内数值为5的元素
	int length = 100;  // 数组大小
	int A[100];
	for (int i = 0; i < length; i++)
		A[i] = rand() % 20 - 10;

	sort(A, A + length);  // 便于观察，对输入数组先进行排序

	cout << "输入数组长度为：" << length << endl;
	cout << "输入数组为：" << endl;
	for (int j = 0; j < 100; j++)
		cout << A[j] << " ";
	cout << endl << endl;

	cout << "删除数值为：" << Elem << "的元素" << endl << endl;

	Solution s;
	int result = s.RemoveElement(A, 100, Elem);

	cout << "输入数组长度为：" << result << endl;
	cout << "输出数组为：" << endl;
	for (int k = 0; k < result; k++)
	{
		cout << A[k] << " ";
	}
	cout << endl;

	getchar();
	return 0;
}