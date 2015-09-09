#include "GrayCode.h"

int main()
{
	Solution s;
	int n;
	cout << "Please input the value of bit: ";
	cin >> n;

	vector<int> k = s.buildGrayCode(n);
	cout << "The gray code is: " << endl;
	
	vector<vector<int> > result;  // int to binaries
	for (vector<vector<int>>::size_type i = 0; i < k.size() ; i++)
		result.push_back(s.Binarycout(k[i], n));

	for (vector<vector<int>>::size_type x = 0; x < result.size(); x++) // vector<vector<int>>::size_type
	{
		for (vector<int>::size_type y = 0; y < result[x].size(); y++) // vector<int>::size_type
			cout << result[x][y] << " ";
		cout << " : " << k[x] << endl;
	}
}