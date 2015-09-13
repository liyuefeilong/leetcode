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
		for (size_t i = 0; i < gas.size(); ++i) // ��ÿ����վ��������б���
		{
			remainingGas += gas[i] - cost[i];
			sum += gas[i] - cost[i];
			if (sum < 0)
			{
				sum = 0;
				resultIndex = i + 1;
			}
		}
		if (remainingGas < 0) return -1;    // ���м���վ�ļ�����С��������
		else return resultIndex;            // �н�
	}
};