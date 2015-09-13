#include "GasStation.h"

int main()
{
	vector<int> gas, cost;
	gas.push_back(6);
	gas.push_back(7);
	gas.push_back(8);
	gas.push_back(9);
	cost.push_back(9);
	cost.push_back(9);
	cost.push_back(9);
	cost.push_back(9);

	cout << "The amount of gas at station is: ";
	for (size_t i = 0; i < gas.size(); i++)
	{
		cout << gas[i] << " ";
	}
	cout << endl;
	cout << "Every travel costs of gas: ";
	for (size_t i = 0; i < cost.size(); i++)
	{
		cout << cost[i] << " ";
	}
	cout << endl;

	gas.size();

	Solution s;
	int result = s.canCompleteCircuit(gas, cost);
	if (result != -1)
		cout << "At the No." << result + 1 << " station, you can go back to the original place." << endl;
	else 
		cout << "The car cannot go back to the original place." << endl;
	system("pause");
	return 0;
}