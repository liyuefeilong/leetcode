#include "Triangle.h"

int main()
{
	vector<vector<int> > triangle;
	vector<int> temp;
	temp.push_back(2);
	triangle.push_back(temp);
	temp.clear();
	temp.push_back(3);
	temp.push_back(4);
	triangle.push_back(temp);
	temp.clear();
	temp.push_back(6);
	temp.push_back(5);
	temp.push_back(7);
	triangle.push_back(temp);
	temp.clear();
	temp.push_back(4);
	temp.push_back(1);
	temp.push_back(8);
	temp.push_back(3);
	triangle.push_back(temp);
	temp.clear();

	Solution s;
	int result = s.minimumTotal(triangle);

	cout << result << endl;

	system("pause");
	return 0;
}