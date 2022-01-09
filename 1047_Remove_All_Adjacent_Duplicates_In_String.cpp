class Solution {
public:
    string removeDuplicates(string s) {
      string ret = "";
        for (char& c: s) {
            if (ret.size() != 0 and ret.back() == c)
                ret.pop_back();
            else
                ret.push_back(c);
        }
        return ret;
    }
};