#include "ValidPalindrome.h"
using std::cout;
using std::endl;

int main()
{
	string a = "abc: dog! e d cb a";
	Solution s;
	cout << "The string is: " << a << endl;

	bool result = s.validPalindrome(a);

	cout << "Valid palindrome ?" << endl;
	if (result == true)
		cout << "Yes";
	else
		cout << "No";
	
	getchar();
}