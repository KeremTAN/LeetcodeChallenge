class Solution {
public:
    bool isHappy(int n) {
        int num=0, tmp;
        unordered_set<int> st;
        while(n!=1){
            num=0;
            while(n>0){
                tmp=n%10;
                num+=(tmp*tmp);
                n/=10;
            }
            n=num;
            if(!st.count(n))
                st.insert(n); 
            else return 0;
        }
        return 1;
    }
};