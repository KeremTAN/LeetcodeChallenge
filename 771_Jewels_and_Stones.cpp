class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ret{};
        unordered_map<char, int> umj;
        for(const char& c : jewels)
            umj[c]++;
        for(const char& c : stones)
            ret+=umj[c];
        return ret;
    }
};