class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> m(26);
        for(char& c: magazine)
            m[c-'a']++;
        for(char& c: ransomNote){
            if(m[c-'a']>0)
                m[c-'a']-=1;
            else return 0;
        }
        return 1;
    }
};