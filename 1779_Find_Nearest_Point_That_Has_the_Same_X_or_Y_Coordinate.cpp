class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {  
        int tmp=-1, ix=0;
        multimap<int, int> dist;
        for(const vector<int>& point : points){
            if(x==point[0] || y==point[1]){
                tmp=abs(x-point[0])+abs(y-point[1]);
                dist.insert({tmp, ix});       
            }
            ix++;
        }
        if(tmp==-1)
            return -1;
        return dist.begin()->second;        
    }
};