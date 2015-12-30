#include "ShortestPalindrome.h"

int main()
{
	cout << "Please input a string: "; 
	string s;
	cin >> s;

	Solution k;

	string result = k.shortestPalindrome(s);

	cout << "The shortest Palindrome is: " << result << endl;

	system("pause");
	return 0;
}