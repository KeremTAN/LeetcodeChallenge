class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int size=arr.size()-1, i=0, j=size, c1=0, c2=0;
        while(i<size || j>-1){
            if(arr[i]!=1)
                if(arr[i]%2!=0)
                    c1++;
                else c1=0;
            else c1++;
            if(arr[j]!=1)
                if(arr[j]%2!=0)
                    c2++;
                else c2=0;
            else c2++;
            if(c1==3 || c2==3)
                return 1;
            i++;
            j--;
        }
        return 0;
    }
};