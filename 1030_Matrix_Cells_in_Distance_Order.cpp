class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        multimap<int, vector<int>> dist;
        vector<vector<int>> ret;
        ret.reserve(rows*cols);
        vector<int> coor = {0, 0};
        int d;
        
        for(int i=0; i<rows; i++)
            for(int j=0; j<cols; j++){
                d = abs(rCenter-i)+abs(j-cCenter);
                coor[0] = i;
                coor[1]= j;
                dist.insert(make_pair(d,coor));
            }
        
        for(auto& it : dist){
           ret.emplace_back(it.second);
        }
        return ret;
    }
};