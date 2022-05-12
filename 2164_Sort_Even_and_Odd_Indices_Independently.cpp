class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int es=2, os=3, size=nums.size(), i, j;
        if(size>1){
            vector<int> evens;
            evens.reserve(size/2);
            vector<int> odds;
            odds.reserve(size/2);
            for(i=0; i<size; i+=2){
                evens.emplace_back(nums[i]);
                odds.emplace_back(nums[i+1]);
            }
            if(i<size){
            odds.emplace_back(nums[i+1]);
            }
            sort(evens.begin(), evens.end());
            sort(odds.begin(), odds.end(), greater<int>());
        
            for(i=0, j=0; i<size; i+=2, j++){
                nums[i]=evens[j];
                nums[i+1]=odds[j];
            }
        }
        return nums;
    }
};