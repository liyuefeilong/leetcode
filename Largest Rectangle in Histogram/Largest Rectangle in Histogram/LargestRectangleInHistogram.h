#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
	int largestRectangleArea(vector<int> &height)
	{
		if (height.size() == 0) return 0;
		height.push_back(0);
		int MaxHist = 0;  // �洢���������
		stack<int> k;     // ʹ��ջ�洢����
		
		for (int index = 0; index < height.size(); ++index)
		{
			if (k.empty() || height[k.top()] < height[index]) 
				k.push(index);
			else
			{
				int temp = k.top();
				k.pop();
				// �ֲ�������㣬���Ϊ��ǰindex��ջ���洢������k.top()�ľ���
				int localArea = height[temp] * (k.empty() ? index : (index - k.top() - 1)); 
				if (localArea > MaxHist)
					MaxHist = localArea;
				--index;
			}
		}
		return MaxHist;
	}
};
