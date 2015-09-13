#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int canCompleteCircuit(vector<int> &gas, vector<int> &cost) 
	{
		int remainingGas = 0;
		int resultIndex = 0;
		int sum = 0;
		for (size_t i = 0; i < gas.size(); ++i) // 对每个车站的情况进行遍历
		{
			remainingGas += gas[i] - cost[i];
			sum += gas[i] - cost[i];
			if (sum < 0)
			{
				sum = 0;
				resultIndex = i + 1;
			}
		}
		if (remainingGas < 0) return -1;    // 所有加油站的加油量小于消耗量
		else return resultIndex;            // 有解
	}
};