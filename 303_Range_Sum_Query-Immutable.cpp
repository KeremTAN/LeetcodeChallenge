class NumArray {
public:
    NumArray(vector<int>& nums) {
        sum.reserve(nums.size()+1);
        sum.emplace_back(0);
        for (int& n : nums)
            sum.emplace_back(sum.back() + n);
    }
    int sumRange(int left, int right) {
        return sum[right+1]-sum[left];
    }
private:
    vector<int> sum;
};