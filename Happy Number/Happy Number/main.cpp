#include "HappyNumber.h"

int main()
{
	while (true)
	{
		int num;
		cout << "Please input a number: ";
		cin >> num;

		Solution s;

		bool result = s.isHappy(num);

		cout.setf(ios::boolalpha); // ����setf����cout�����ʽ
		cout << "Is it a happy number? " << result << endl;
		cout << endl;
	}

	system("pause");
	return 0;
}