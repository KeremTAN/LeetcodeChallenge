class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=100000, max=-1, ret=0;
        for(int& i : prices){
            if(i<min){
                min=i;
                max=-1;
            }
            else if(max<i){
                max=i;
                if(i-min>ret)
                    ret = i-min;
            }
        }
        return ret;
    }
};