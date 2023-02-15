class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int ret=0, size=s.size()-k+1;
        for(int i=0; i<size; i++){
            int div = stoi(s.substr(i,k));
            if(div && num%div==0)
                ret++;
        }
        return ret;
    }
};