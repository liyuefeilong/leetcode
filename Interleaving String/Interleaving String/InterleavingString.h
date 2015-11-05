#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
	 bool isInterleave(string s1, string s2, string s3)
	 {
		 if (s3.size() != s1.size() + s2.size())
			return false;
		 if (s3[0] != s1[0] && s3[0] != s2[0])
			return false;
		 
		 vector<vector<bool> > k(s1.size() + 1, vector<bool>(s2.size() + 1, false));
		 k[0][0] = true;

		 // ±ﬂΩÁ…Ë÷√
		 for (size_t i = 1; i <= s1.size(); ++i)
			 k[i][0] = (s1[i - 1] == s3[i - 1]) && k[i - 1][0];

		 for (size_t j = 1; j <= s2.size(); ++j)
			 k[0][j] = (s2[j - 1] == s3[j - 1]) && k[0][j - 1];

		 for (size_t i = 1; i <= s1.size(); ++i)
		 {
			 for (size_t j = 1; j <= s2.size(); ++j)
			 {
				 k[i][j] = ((s1[i - 1] == s3[i + j - 1]) && k[i - 1][j]) ||
						   ((s2[j - 1] == s3[i + j - 1]) && k[i][j - 1]);
			 }
		 }
		
		for (size_t i = 0; i < k.size(); ++i)
		{
			for (size_t j = 0; j < k[0].size(); ++j)
			{
				cout << k[i][j] << " ";
			}
			cout << endl;
		}

		 return k[s1.size()][s2.size()];
	 }
};