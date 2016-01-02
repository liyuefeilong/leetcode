#include "sqrt.h"

int main()
{
	while(1)
	{
		cout << "Please input a number: ";
		int x; 
		cin >> x;

		Solution s;

		int result = s.sqrt(x);
		cout << "The root of number is: " << result << endl << endl;
	}
	system("pause");
	return 0;
}