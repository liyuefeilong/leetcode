#include "power.h"

int main()
{
	while (1)
	{
		double x;
		int n;
		cout << "Please input the x and n: ";
		cin >> x >> n;

		Solution s;
		double result = s.pow(x, n);

		cout << "Implement pow(x, n), the result is: " << result << endl << endl;
	}

	system("pause");
	return 0;
}