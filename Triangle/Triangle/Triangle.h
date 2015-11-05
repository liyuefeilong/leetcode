#include <iostream>
#include <vector>

using namespace std;

class Solution

{
public:
    int minimumTotal(vector<vector<int> > &triangle)
	{
		size_t length = triangle.size();
		if(length == 0) return 0;
		int result = 0;

		for (size_t i = 1; i < length; ++i)
		{
			size_t width = triangle[i].size();

			for (size_t j = 0; j < width; ++j)
			{
				if (j == 0)
					triangle[i][j] += triangle[i - 1][j];
				else if (j == width - 1)
					triangle[i][j] += triangle[i - 1][j - 1];
				else
					triangle[i][j] += triangle[i - 1][j - 1] > triangle[i - 1][j] ? triangle[i - 1][j] : triangle[i - 1][j - 1];

			if (i == length - 1 && j == 0)
				result = triangle[i][j];

			if (i == length - 1 && result > triangle[i][j])
				result = triangle[i][j];
			}
		}
		return result;
	}
};