#include "ValidParentheses.h"

int main()
{
	cout << "Please input a string (only the characters '(¡¯, ¡¯)¡¯, ¡¯{¡¯, ¡¯}¡¯, ¡¯[¡¯ and ¡¯]¡¯): " << endl;
	string input;
	cin >> input;
	Solution s;
	bool result = s.isValid(input);
	cout.setf(ios::boolalpha);
	cout << "The result is: " << result << endl;
	system("pause");
	return 0;
}