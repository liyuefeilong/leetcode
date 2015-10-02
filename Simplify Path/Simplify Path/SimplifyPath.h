#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
	string simplifyPath(string path)
	{
		stack<string> str;
		for (size_t i = 0; i < path.size(); ++i)
		{
			string name = "";
			while (i < path.size() && path[i] == '/')
				++i;  // 该操作跳过斜线'/'
			while (i < path.size() && path[i] != '/')
				name += path[i++];  // 开始记录路径名，包括".."
			if (name != "." && name != "..") // 对对不同的文件名进行不同操作
				str.push(name);   // 非".."文件名，压栈
			else if (!str.empty() && name == "..")
				str.pop();  // 当前文件名为".."，表示退到上层目录，需弹出栈     
		}
		if (str.empty())
			return "/";
		string result = "";
		while (!str.empty())
		{
			result = "/" + str.top() + result; // 最后组合path
			str.pop();
		}
		return result;
	}
};