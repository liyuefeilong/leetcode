#include "EditDistance.h"

int main()
{
	string word1;
	string word2;

	cout << "Please input the first string: ";
	cin >> word1;
	cout << "Please input the second string: ";
	cin >> word2;

	Solution s;

	int result = s.minDistance(word1, word2);

	cout << "The minimum number of steps required to convert word1 to word2 is: " << result << endl;

	system("pause");
	return 0;
}