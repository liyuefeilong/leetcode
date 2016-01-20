#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
		if (digits == "") return result;
		static string k[8] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
		string temp = "";
		dfs(digits, temp, k);
		return result;
    }

private:
	vector<string> result;
	void dfs(string dig, string temp, string str[])
	{
		// find函数用于寻找某个序列的在string中第一次出现的位置，防止重复
		if (dig.size() == 0 && find(result.begin(), result.end(), temp) == result.end()) 
		{
			result.push_back(temp);
			return;
		}
		else
		{
			for (int i = 0; i < str[dig[0] - '2'].size(); ++i)
			{
				temp += str[dig[0] - '2'][i]; // 在最后添加一个字符
				dfs(dig.substr(1, dig.size()), temp, str);
				temp = temp.substr(0, temp.size() - 1); // 去掉最后一个字符
			}
			return;
		}
	}
};