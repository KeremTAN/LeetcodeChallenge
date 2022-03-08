class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        
        std::sort(A.begin(), A.end());
 
        if(A[0]>1 or A[A.size()-1]<0)
            return 1;
        
        for(int i=0; i < A.size()-1; i++){
            if(A[i]<0 and A[i+1]>1){
                return 1;
            }
            
            if(abs(A[i+1])-abs(A[i]) > 1){
                return A[i]+1;
            }
        }
        return A[A.size()-1]+1;
    }
};