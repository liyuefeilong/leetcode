#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int maximalRectangle(vector<vector<char> > &matrix)
	{
		int m = matrix.size();  
        if (m == 0) return 0;  
        int n = matrix[0].size();  
        if (n == 0) return 0;
		vector<int> H(n, 0);
		vector<int> L(n, 0);
		vector<int> R(n, n);

		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				;
			}
		}
	}
};