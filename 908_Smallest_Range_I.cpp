class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int& num : nums){
            mx=max(mx,num);
            mn=min(mn,num);
        }
        mx-=k;
        mn+=k; 
        return  mn>=mx ? 0 : mx-mn;
    }
};