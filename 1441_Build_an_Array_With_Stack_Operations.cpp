class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ret;
        int i=0, counter=1;
        while(i<target.size()){
            if(target[i++]==counter++){
                ret.push_back("Push");
            }
            else{
                ret.push_back("Push");
                ret.push_back("Pop");
                i--;
            }
           
        }
        return ret;
    }
};