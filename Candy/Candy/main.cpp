#include "Candy.h"

int main()
{
	vector<int> data;
	data.push_back(1);
	data.push_back(2);
	data.push_back(3);
	data.push_back(2);
	data.push_back(1);

	vector<int> result;
	Solution s;
	result = s.Candy(data);
	int Size = result.size();
	for (int i = 0; i < Size; i++)
		cout << result[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}