#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {  
public:  
    string shortestPalindrome(string s) {  
        string rev_s = s;  
        reverse(rev_s.begin(), rev_s.end());  
        string temp = s + "#" + rev_s;  
        vector<int> p(temp.size(), 0);  
        for (int i = 1, j = p[i - 1]; i < temp.size(); ++i)   
        {  
            while (j > 0 && temp[i] != temp[j])  
                j = p[j - 1];    

            if (temp[i] == temp[j]) ++j;  
            p[i] = j;  
        }  
        return rev_s.substr(0, s.size() - p[temp.size() - 1]) + s;  
    }  
};  