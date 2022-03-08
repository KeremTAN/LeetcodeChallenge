class Solution {
public:
    vector<int> minOperations(string boxes) {
        int total = 0;
        vector<int> ret(boxes.size(), 0);
        for(int i=0; i<boxes.size(); i++){
            if(boxes[i]=='1'){
                total++;
                ret[0] += i;
            }
        }
        int left = 0, right = total;
        if(boxes[0]=='1'){right--; left++;}
        for(int i=1; i<boxes.size(); i++){
            ret[i] = ret[i-1] - right + left;
            if(boxes[i]=='1'){right--; left++;}
        }
        return ret;
    }
};