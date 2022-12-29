class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int rank=1, size=score.size();
        map<int, int, greater<int>> m;
        vector<string> ret(size);
        
        for(int i=0; i<size; i++)
            m[score[i]]=i;

        for(auto it=m.begin(); it!=m.end(); ++it){
            if(rank>3)
                ret[it->second]=to_string(rank);
            else if(rank==1) ret[it->second]="Gold Medal";
            else if(rank==2) ret[it->second]="Silver Medal";
            else ret[it->second]="Bronze Medal";
            rank++;
        }
        
        return ret;
    }
};