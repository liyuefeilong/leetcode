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
		int MaxHist = 0;  // 存储最大矩形面积
		stack<int> k;     // 使用栈存储索引
		
		for (int index = 0; index < height.size(); ++index)
		{
			if (k.empty() || height[k.top()] < height[index]) 
				k.push(index);
			else
			{
				int temp = k.top();
				k.pop();
				// 局部面积计算，宽度为当前index与栈顶存储的索引k.top()的距离
				int localArea = height[temp] * (k.empty() ? index : (index - k.top() - 1)); 
				if (localArea > MaxHist)
					MaxHist = localArea;
				--index;
			}
		}
		return MaxHist;
	}
};
