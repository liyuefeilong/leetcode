// 测试代码
#include "solution.h"
using namespace std;

int main()
{
	int num = 100;

	vector<int> number(100);
	for (int i = 1; i < num; i++)
		number.push_back(rand() % 100 - 30); // 随机生成一组数据

	vector<vector<int>> result;
	solution Sum;
	result = Sum.threeSum(number);  // 执行算法并返回结果至result

	// 访问元素,result是多维的，需使用多个for循环

	cout << "三个数的和为零的组合有：" << endl;

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