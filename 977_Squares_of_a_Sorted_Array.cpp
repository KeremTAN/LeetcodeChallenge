class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		vector<int> ret(nums.size());
		int i = 0, j = nums.size()-1, ix = nums.size()-1, n1, n2;
		while(i <= j){
			n1 = nums[i] * nums[i];
			n2 = nums[j] * nums[j];
			if(n1 > n2){
				ret[ix--] = n1;
                i++;
            }
            else{
                ret[ix--] = n2;
                j--;
            }
		}
		return ret;
	}
};