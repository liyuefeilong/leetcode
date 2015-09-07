#include "solution.h"
#include <algorithm>

int main()
{
	int num = 50;
	int number[50];
	
	for (int i = 0; i < num; i++)
		number[i] = rand() % 10 - 10;
	sort(number, number + num); // 先对数组进行排序
	cout << "输入的数组（已排序）：" << endl;
	for (int j = 0; j < num; j++)
		cout << number[j] << " ";
	cout << endl << endl;

	Solution remove;
	int index = remove.removeDuplicates(number, num); // 执行算法

	cout << "去除重复元素后的数组：" << endl;
	for (int k = 0; k <index; k++)
		cout << number[k] << " ";
	cout << endl;
	cout << "数组元素的剩余个数：" << index << endl;
	getchar();
	return 0;
}
