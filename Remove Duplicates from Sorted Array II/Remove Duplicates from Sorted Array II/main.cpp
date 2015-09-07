#include <algorithm>
#include "solution.h"
using namespace std;

int main()
{
	int removeTime = 5; // 允许数组中每个元素最多重复的次数
	int a[100];         // 定义一个存放100个元素的数组
	int n = 100;
	for (int i = 0; i < n; i++)
		a[i] = rand() % 20 - 5;
	sort(a, a + 100); // 要求在执行算法之前数组已经过排序
	cout << "原始数组：";
	for (int j = 0; j < n; j++)
		cout << a[j] << " ";
	cout << endl << endl;

	Solution remove;
	int result_num;
	result_num = remove.RemoveDuplicatesII(a, n, removeTime);

	for (int k = 0; k < result_num; k++) // 数组a中前result_num个元素是处理后的元素
		cout << a[k] << " ";
	cout << endl;
	cout << "删除重复多于" << removeTime << "次的数据后数组剩余" << result_num << "个元素" << endl;

	getchar();
	return 0;
}