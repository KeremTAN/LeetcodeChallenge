class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ret=0;
        for(string& s : logs){
            if(s[0]!=46)
                ret++;
            else if(s[1]==46)
                ret = ret != 0 ? --ret : 0;
        }
      return ret;  
    }
};