class Solution {
public:
    int maxArea(vector<int>& height) {
        int ret{}, tmp{};
        int fi{}, li=height.size()-1;

        while(fi<li){
            tmp = (li-fi)*min(height[fi], height[li]);
            if(tmp>ret)
                ret=tmp;
            if(height[fi]<height[li])
                fi++;
            else li--;
        }

        return ret;
    }
};