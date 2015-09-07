#include "solution.h"
using namespace std;

int main()
{
	solution a;
	int size = 200;  // 数据的个数
	vector<int> num(size);  // 用于存放数据的容器
	vector<vector<int> > result;  // 存放算法的运行结果
	for (int i = 0; i < size; i++)
		num.push_back(rand() % 30 - 20); // 随机生成数据

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