#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	string numberToWords(int num) {
		//  num的最大值：2,147,483,647
		const static string unit[4] = {"", " Thousand", " Million", " Billion"};
		string result;
		int partNum[4];
		for (int i = 0; i < 4; ++i)
		{
			partNum[i] = num % 1000;
			num /= 1000;
			if (partNum[i] == 0) continue;
			result = stitch(partNum[i]) + unit[i] + result;
		}
		// 去掉result首位的空格
		return result.size() ? result.substr(1) : "Zero";
	}

private:
	string stitch(int num) {
		const static string lessTen[10] = 
		{"", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine"};
		const static string lessTwenty[10] = 
		{" Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen",
		" Seventeen", " Eighteen", " Nineteen"};
		const static string lessHundred[10] = 
		{"", "", " Twenty", " Thirty", " Forty", " Fifty", " Sixty", " Seventy", 
		" Eighty", " Ninety"};

		string temp;

		if (num != 0)
		{
			int units, tens, hundreds; // 个位、十位、百位出现的
			hundreds = num / 100;
			tens = (num % 100) / 10;
			units = (num % 100) % 10;

			if (hundreds != 0)
				temp = temp + lessTen[hundreds] + " Hundred";

			if (tens != 0)
			{
				if (tens == 1)
				{
					temp += lessTwenty[units];
					return temp;
				}
				else
					temp += lessHundred[tens];
			}

			if (units != 0)
				temp += lessTen[units];
		}
		return temp;
	}
};