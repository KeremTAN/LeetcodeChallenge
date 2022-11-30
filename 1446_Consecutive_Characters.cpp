class Solution {
public:
    int maxPower(string s) {
        int ret= 1, cnt=1;
        for(int i=1; i<s.size(); i++){
            if(s[i-1]!=s[i]){
                if(cnt>ret) ret=cnt;
                cnt=1;
            }
            else cnt++;
        }
         if(ret < cnt)
            ret = cnt;
        return ret;
    }
};