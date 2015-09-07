#include <iostream>
#include <string>
#include <iterator>
using namespace std;

class Solution
{
public:
	string PermutationSequence(int n, int k)
	{
		int total = CombinedNumber(n - 1);
		if (k > total)
		{
			cout << "The k is larger then the total number of permutation sequence:" << total << endl;
			return "Null!";
		}

		string a(n, '0');
		for (int i = 0; i < n; ++i)
			a[i] += i + 1;   // sorted

		// Cantor expansion
		string s = a, result;
		k--; // (k - 1) values are less than the target value 
		
		for (int i = n - 1; i > 0; --i)
		{
			auto ptr = next(s.begin(), k / total);
			result.push_back(*ptr);
			s.erase(ptr);  // delete the already used number
			k %= total;    // update the dividend
			total /= i;    // update the divider
		}
		result.push_back(s[0]);  // The last bit
		return result;
	}

private:
	int CombinedNumber(int n)
	{
		int num = 1;
		for (int i = 1; i < n + 1; ++i)
			num *= i;
		return num;
	}
};
