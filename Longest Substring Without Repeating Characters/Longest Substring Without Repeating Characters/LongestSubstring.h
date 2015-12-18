#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int local[256]; // 保存ASCII字符上一次出现在字符串的下标
        memset(local, -1, sizeof(local));

        int index = -1, max = 0;//index为当前子串的开始位置-1
        for (int i = 0; i < s.size(); ++i)
        {
            if (local[s[i]] > index) // 如果当前字符出现过，那么当前子串的起始位置为这个字符上一次出现的位置+1
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