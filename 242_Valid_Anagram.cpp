class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return 0;
        vector<int> cntr(26,0);
        for(int i = 0; i < s.length(); i++) {
            cntr[s[i]-'a']++;
            cntr[t[i]-'a']--;
        }
        for(int& c : cntr)
            if(c!= 0) return 0;
        return 1;
    }
};