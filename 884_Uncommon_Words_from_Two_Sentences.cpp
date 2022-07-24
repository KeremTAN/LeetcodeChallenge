class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> words;
        vector<string> ret;
        string tmp="", tmp2="";
        int n = max(s1.size(), s2.size());
        for(int i=0; i<n; i++){
            if(i<s1.size()){
                if(s1[i]!=' '){
                    tmp+=s1[i];
                }
                else {
                    words[tmp]++;
                    tmp.clear();
                }
            }
            if(i<s2.size()){
                if(s2[i]!=' '){
                    tmp2+=s2[i];
                }
                else {
                    words[tmp2]++;
                    tmp2.clear();
                }
            }
        }
        if(tmp.size()>0)
            words[tmp]++;
        if(tmp2.size()>0)
            words[tmp2]++;
            
        for(auto& it : words){
            if(it.second==1)
                ret.push_back(it.first);
        }
        
        return ret;
    }
};