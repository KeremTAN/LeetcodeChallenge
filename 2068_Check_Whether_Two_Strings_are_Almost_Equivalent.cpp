class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<int, int> w;
        
        for(int i=0; i<word1.size(); i++) {
            w[word1[i]]++;
            w[word2[i]]--;
        }
        
        for(auto& it : w)
            if(it.second > 3 || it.second < -3)
                return false;
        
        return true;
    }
};