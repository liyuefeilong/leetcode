#include <string>
#include <sstream>
using namespace std;

class Solution
{
public:
	string CountAndSay(int n)
	{
		string result = "1";

		while (--n)
			result = theNextStr(result);
		return result;
	}

private:
	string theNextStr(const string& str)
	{
		if (str.empty())
			return string();
		stringstream result;
		int strSize = str.size();
		int count = 1; // 计数

		for (int Index = 0; Index < strSize - 1; Index++)
		{
			if (str[Index] == str[Index + 1])
				count++;
			else
			{
				result << count << str[Index];
				count = 1;
			}
		}
		result << count << str[strSize - 1]; // 最后一位
		return result.str();
	}
};