class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size())
            return 0;
        int mis=0;
        vector<int> chars1(26);
        vector<int> chars2(26);

        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i])
                mis++;
            chars1[s1[i]-'a']++;
            chars2[s2[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            if(chars1[i]!=chars2[i])
                return 0;
        }
        return mis > 2? 0 : 1;
    }
};