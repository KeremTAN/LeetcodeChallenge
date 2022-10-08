class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int leader = 0, vote = 0;
        for(int& i : nums) {
            if(vote == 0){
                leader = i;
                vote = 1;
            }
            else if(leader == i) vote++;
            else vote--;
        }
        return leader;
    }
};