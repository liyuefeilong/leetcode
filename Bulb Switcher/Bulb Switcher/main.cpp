#include "BulbSwitcher.h"

int main()
{
	int n;
	cout << "How many bulbs that are initially off? ";
	cin >> n;

	int result;
	Solution s;
	result = s.bulbSwitch(n);

	cout << "How many bulbs are on after n rounds? " << result << endl;
	system("pause");
	return 0;
}