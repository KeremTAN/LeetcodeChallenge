class Solution {
public:
    int firstUniqChar(string s) {
        int chars[26] = {0};
        for (int i = 0; i < s.size(); i++)
            chars[s[i]-'a']++;
        for (int i = 0; i < s.size(); i++)
            if (chars[s[i]-'a'] == 1) 
                return i;
        return -1;
    }
};