class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ret(nums.size());
        int p=0, n=1;
        for(int& i : nums)
            if(i < 0){
                ret[n]=i;
                n+=2;
            }
            else {
                ret[p]=i;
                p+=2;
            }
        return ret;
    }
};