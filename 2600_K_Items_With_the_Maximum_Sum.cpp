class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ret{};
        if(k<=numOnes) return k;
        else if(k<=numOnes+numZeros) return numOnes;
   
        return numOnes + (k-numZeros-numOnes)*-1;
    }
};