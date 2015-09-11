#include "PlusOne.h"

void main()
{
	vector<int> testData;
	testData.push_back(9);
	testData.push_back(9);
	testData.push_back(9);
	testData.push_back(9);
	int Size = testData.size();

	cout << "Input: ";
	for (int i = 0; i < Size; i++)
		cout << testData[i] << " ";
	cout << endl;

	Solution s;
	s.plusOne(testData);
	Size = testData.size();
	cout << "Plus one result: ";
	for (int i = 0; i < Size; i++)
		cout << testData[i] << " ";
	cout << endl;

	system("pause");
}