class Solution {
public:
    Solution(){
        const vector<string> read{"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        int keyboardIx{1};
        for(const string& str : read){
            for(const char& chr : str){
                m_um[chr]=keyboardIx;
                m_um[chr-32]=keyboardIx; // for upcase chars
            }
            keyboardIx++;
        }
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> ret{};
        ret.reserve(words.size());

        for(const string& str : words){
            int counter{}, flag=m_um[str[0]];
            for(const char& chr: str){
                counter+=m_um[chr];
            }

            if((flag==1 && counter==str.size())
            || (flag==2 && counter==str.size()*2)
            || (flag==3 && counter==str.size()*3))
                ret.emplace_back(str);
        }
        return ret;
    }
private:
    unordered_map<unsigned char, unsigned char> m_um{};
};