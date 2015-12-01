#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<string> generateParenthesis(int n)
	{
		if (n == 0) return vector<string>(1, "");
		if (n == 1) return vector<string>(1, "()");

		vector<string> result;
		string s = "";
		generate(s, n, 0, 0, result);
		return result;
	}

private:
	void generate(string s, int n, int leftNum, int rightNum, vector<string> &result)
	{
		if (rightNum == n) result.push_back(s);
	}
};