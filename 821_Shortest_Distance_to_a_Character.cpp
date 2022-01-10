class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ret;
        ret.reserve(s.size());
        int f=0,b=0, min_c=1000, cost=0;
        for(int i=0; i<s.size(); i++){
            f=i, b=i, cost=0, min_c=1000;
            if(c==s[i]){
                ret.emplace_back(cost);
                continue;
            }
            while(f < s.size()){
                if(s[f++] != c){ cost++; }
                else {
                    min_c = cost;
                    break;
                }
            }
            cost=0; 
            while(b > -1){
                if(s[b--] != c){ cost++; }
                else {
                    min_c = min_c < cost ? min_c : cost;
                    break;
                }
            }
            ret.emplace_back(min_c);
        }
        return ret;
    }
};