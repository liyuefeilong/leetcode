#include "ReverseInteger.h"

int main()
{
	while (1)
	{
		int x, result;
		cout << "Please input an integer: ";
		cin >> x;

		Solution s;
		result = s.reverse(x);
		cout << "Reverse digits of the integer: " << result << endl;
	}

	system("pause");
	return 0;
}