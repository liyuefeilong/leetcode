#include "InterleavingString.h"
//#include <WinUser.h>
int main()
{

	//int x = GetSystemMetrics(SM_CXSCREEN);
	//int y = GetSystemMetrics(SM_CYSCREEN);
	while (true)
	{
		string s1;
		cout << "Please input the first string: ";
		cin >> s1;

		string s2;
		cout << "Please input the second string: ";
		cin >> s2;

		string s3;
		cout << "Please input the third string: ";
		cin >> s3;

		Solution s;

		bool result = s.isInterleave(s1, s2, s3);

		cout.setf(ios::boolalpha);
		cout << "s3 is formed by the interleaving of s1 and s2? " << result << endl;
	}

	system("pause");
	return 0;
}