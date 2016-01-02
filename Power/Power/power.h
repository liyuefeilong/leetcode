#include <iostream>

using namespace std;

class Solution {
public:
	double pow(double x, int n) 
	{
		if (n == 0)
			return 1;
		if (n > 0) 
			return power(x, n);
		else 
			return 1 / power(x, -1 * n);
		}

private:
	double power(double x, int n) 
	{
		if (n == 0) 
			return 1;
		double a = power(x, n / 2); // µ›πÈ«Ûx^(n/2)
		if (n % 2 == 0) 
			return a * a;
		else 
			return a * a * x;
	}
};