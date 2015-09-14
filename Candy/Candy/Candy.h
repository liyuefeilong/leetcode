#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	vector<int> Candy(vector<int>& rating)
	{
		int ratingSize = rating.size();
		vector<int> num(ratingSize, 1);
		int inc = 1;
		for (int i = 0; i < ratingSize - 1; i++)
		{
			
			if (rating[i] < rating[i + 1])
				num[i] = max(num[i], inc++);
			else
				inc = 1;
		}
		inc = 1;
		/*
		for (int i = ratingSize - 1; i > 0; i--)
		{
			int inc = 1;
			if (rating[i] < rating[i - 1])
				num[i] = max(num[i], inc++);
			else
				inc = 1;
		}*/
		return num;
	}
};
