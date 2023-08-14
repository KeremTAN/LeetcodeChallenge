class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i{}, j=numbers.size()-1;

        while(i<j){
            if(numbers[i]+numbers[j]>target)
                j--;
            else if(numbers[i]+numbers[j]<target)
                i++;
            else return {++i, ++j};
        }
        return {};
    }
};