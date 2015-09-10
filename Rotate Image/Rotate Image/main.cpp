#include "RotateImage.h"
#include<iomanip>

int main()
{
	vector<vector<int> > image;
	vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	image.push_back(vec);
	vec.clear();
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);
	image.push_back(vec);
	vec.clear();
	vec.push_back(9);
	vec.push_back(10);
	vec.push_back(11);
	vec.push_back(12);
	image.push_back(vec);
	vec.clear();
	vec.push_back(13);
	vec.push_back(14);
	vec.push_back(15);
	vec.push_back(16);
	image.push_back(vec);
	vec.clear();

	int imaSize = image.size();

	cout << "The input image is: " << endl;
	for (int i = 0; i < imaSize; i++)
	{
		for (int j = 0; j < imaSize; j++)
		{
			cout << setw(3) << image[i][j] << " ";
		}
		cout << endl;
	}

	Solution s;
	s.turnRightImage(image);

	cout << "The rotate image is: " << endl;
	for (int i = 0; i < imaSize; i++)
	{
		for (int j = 0; j < imaSize; j++)
		{
			cout << setw(3) << image[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}