#include "StringToInteger.h"

int main()
{
	char *str1 = "++1";
	char *str2 = "-99987654321AB";
	char *str3 = "+1324A3";
	char *str4 = "    777ABC";
	Solution s;
	int result1 = s.atoi(str1);
	int result2 = s.atoi(str2);
	int result3 = s.atoi(str3);
	int result4 = s.atoi(str4);

	cout << str1 << ": " << result1 << endl;
	cout << str2 << ": " << result2 << endl;
	cout << str3 << ": " << result3 << endl;
	cout << str4 << ": " << result4 << endl;
	system("pause");
	return 0;
}