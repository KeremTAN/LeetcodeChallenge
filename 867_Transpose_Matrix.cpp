class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int col=matrix[0].size(), row=matrix.size();
        vector<int> tmp;
        tmp.reserve(row);
        vector<vector<int>> ret;
        ret.reserve(col);
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                tmp.emplace_back(matrix[j][i]);
            }
            ret.emplace_back(tmp);
            tmp.clear();
        }
        return ret;
    }
};