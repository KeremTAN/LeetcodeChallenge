class Solution {
public:
    string largestOddNumber(string num) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int ix {};
        for(auto it = num.rbegin(); it!=num.rend(); it++){
            if((*it)%2!=0)
                break;
            else ix++; 
        }
        return num.substr(0, num.size()-ix);
    }
};