#include "IntToEng.h"

int main()
{
	int num = 2147483647;

	cout << "The number is: " << num << endl;

	Solution s;

	string result = s.numberToWords(num);

	cout << "Its english words are: " << result << endl;

	system("pause");
	return 0;
}