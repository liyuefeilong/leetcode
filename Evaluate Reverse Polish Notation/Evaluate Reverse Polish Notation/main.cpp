#include "EvaluateReversePolishNotation.h"

int main()
{
	cout << "Please input a Reverse Polish Notation: " << endl;

	vector<string> a;

	/*
	a.push_back("4");
	a.push_back("13");
	a.push_back("5");
	a.push_back("/");
	a.push_back("+");
	*/
	a.push_back("2");
	a.push_back("1");
	a.push_back("+");
	a.push_back("3");
	a.push_back("*");

	Solution s;
	int result = s.evalRPN(a);

	cout << "[2, 1, +, 3, *]" << " -> " << result << endl;

	system("pause");
	return 0;
}