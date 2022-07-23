class Solution {
public:
   vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
       ret.reserve(numRows);
        for(int i=0; i<numRows; i++){
            vector<int> nums;
            nums.reserve(i+1);
            for(int j=0;j<i+1;j++){
                if(j==0|| j==i){
                    nums.emplace_back(1);
                }
                else
                    nums.emplace_back(ret[i-1][j-1]+ret[i-1][j]);
            }
            ret.emplace_back(nums);
        }
        return ret;
    }
};