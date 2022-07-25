class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int c=0, n=s.size(), group=n/k, i=0;
        vector<string> ret;
        ret.reserve(group+1);
        string tmp;
        
        for(; i<n; i++){
            if(c!=k){
                tmp+=s[i];
                c++;
            }
            else{
                ret.emplace_back(tmp);
                tmp.clear();
                i--;
                c=0;
            }
        }
        
        if(tmp.size()!=k) {
            i = tmp.size();
            for(; i<k; i++)
                tmp+=fill;
        }
            
         ret.emplace_back(tmp);
            
        return ret;
    }
};