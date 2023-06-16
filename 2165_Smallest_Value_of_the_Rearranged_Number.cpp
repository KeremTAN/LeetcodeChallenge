class Solution {
public:
    long long smallestNumber(long long num) {
        vector<int> digits{};
        int ix{};

        while(num){
            digits.push_back(num%10);
            num/=10;
        }

        sort(digits.begin(), digits.end());

        if(!digits.empty() && digits[0]==0)
        {
            auto it = find_if(digits.begin(),digits.end(), [](const int& num){
                return num!=0;
            });

            num= *it;
            int dist=distance(digits.begin(), it);
            ix=1;

            while(dist--){
                num*=10;
                ix++;
            }
        }

        for(; ix<digits.size(); ++ix){
            num = num*10 + digits[ix];
        }
        
        return num;
    }
};