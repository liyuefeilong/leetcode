#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int local[256]; // ����ASCII�ַ���һ�γ������ַ������±�
        memset(local, -1, sizeof(local));

        int index = -1, max = 0;//indexΪ��ǰ�Ӵ��Ŀ�ʼλ��-1
        for (int i = 0; i < s.size(); ++i)
        {
            if (local[s[i]] > index) // �����ǰ�ַ����ֹ�����ô��ǰ�Ӵ�����ʼλ��Ϊ����ַ���һ�γ��ֵ�λ��+1
                index = local[s[i]];

            if (i - index > max)
                max = i - index;

            local[s[i]] = i;
        }
        return max;
    }
};

int lengthOfLongestSubstring(string s) 
{
     int max = 0, start = 0;
     bool exist[26];
     int position[26];
 
     for(int i = 0; i < 26; i++) {
         exist[i] = false;
         position[i] = 0;
     }
 
     for(int i = 0; i < s.size(); i++) {
         if(exist[s[i] - 'a']) {
             for(int j = start; j <= position[s[i] - 'a']; j++) {
                 exist[s[j] - 'a'] = false;
             }
             start = position[s[i] - 'a'] + 1;
             exist[s[i] - 'a'] = true;
             position[s[i] - 'a'] = i;
         }
         else {
             exist[s[i] - 'a'] = true;
             position[s[i] - 'a'] = i;
             max = max > (i - start + 1) ? max : (i - start + 1);
         }
     }
 
     return max;
}