#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<int> buildGrayCode(int n)
	{
		
		if (n == 0)
		{
			vector<int> result;
			result.push_back(0);
			return result;
		}
		else
		{
			vector<int> k = buildGrayCode(n - 1);
			vector<int> result(k);
			for (int i = k.size(); i > 0; --i)
				result.push_back(int(pow(2, n - 1) + k[i - 1]));
			return result; 
		}
	}

	vector<int> Binarycout(int n, const int bit_num) // int to binaries
	{
		vector<int> result;
		for (int i = bit_num - 1; i >= 0; i--)
		{
			result.push_back((n >> i) & 1);
		}
		return result;
	}
};
