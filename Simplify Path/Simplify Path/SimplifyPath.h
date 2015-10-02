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
				++i;  // �ò�������б��'/'
			while (i < path.size() && path[i] != '/')
				name += path[i++];  // ��ʼ��¼·����������".."
			if (name != "." && name != "..") // �ԶԲ�ͬ���ļ������в�ͬ����
				str.push(name);   // ��".."�ļ�����ѹջ
			else if (!str.empty() && name == "..")
				str.pop();  // ��ǰ�ļ���Ϊ".."����ʾ�˵��ϲ�Ŀ¼���赯��ջ     
		}
		if (str.empty())
			return "/";
		string result = "";
		while (!str.empty())
		{
			result = "/" + str.top() + result; // ������path
			str.pop();
		}
		return result;
	}
};