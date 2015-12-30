#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int s_size = s.size();
		int p_size = p.size();
		int s_index = 0, p_index = 0;
		int temp_s_index = -1, temp_p_index = -1;
		while (s_index < s_size)
		{
			if (p[p_index] == '?' || p[p_index] == s[s_index])
			{
				++p_index;
				++s_index;
				continue;
			}
			if (p[p_index] == '*') 
			{
				temp_p_index = p_index;
				temp_s_index = s_index;
				++p_index;
				continue;
			}
			if (temp_p_index >= 0)
			{
			    // �ַ���p�����ж��*�����ֻҪ���ֹ�*������Ҫ���µ�ǰƥ����±�
				p_index = temp_p_index + 1;
				s_index = temp_s_index + 1;
				// ��ǰ����s��p��ƥ�䣬��s��������ԭ�����ϼ�һ������ѭ��
				++temp_s_index; 
				continue;
			}
			return false;
		}
		while (p[p_index] == '*') ++p_index;
		return p_index == p_size;
    }
};