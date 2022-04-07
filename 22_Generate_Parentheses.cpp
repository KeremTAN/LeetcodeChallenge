class Solution {
public:
    vector<string> generateParenthesis(int num) {
        vector<string> ret;
        vector<char> prnt;
        prnt.reserve(num*2);
        backtrack(ret, prnt, 0, 0, num);
        return ret;
    }
    void backtrack(vector<string>& ret, vector<char> prnt, const int& left, const int& right, int& num){
        if(prnt.size()==num*2){
            string tmp;
            tmp.reserve(num*2);
            for(char& c : prnt){
                tmp+=c;
            }
            ret.push_back(tmp);
            return;
        }
        if(left<num){
            prnt.emplace_back('(');
            backtrack(ret, prnt, left+1, right, num);
            prnt.pop_back();
            
        }
        
        if(right<left){
            prnt.emplace_back(')');
            backtrack(ret, prnt, left, right+1, num);
            prnt.pop_back();
        }
    }
};