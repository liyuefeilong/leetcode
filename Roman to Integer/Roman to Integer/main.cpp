#include "romanToInteger.h"

int main()
{
	cout << "Please input a Roman number: ";
	string s;
	cin >> s;
	Solution a;
	int result = a.romanToInt(s);

	cout << "The result of Roman to intege is: " << result << endl;
	system("pause");
	return 0;
}