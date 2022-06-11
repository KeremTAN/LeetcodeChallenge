class Solution {
public:
    string digitSum(string s, int k) {
        int t = k, sum=0, d=10, n;
        vector<int> vec;
        vector<char> ch;
        vec.reserve(s.size()/k+1);
      
        while(s.size()>k){
            
            for(char& c : s){
                sum+= (c-48);
                t--;
                if(t==0){
                    vec.emplace_back(sum);
                    sum=0;
                    t=k;
                }
            }
            
            if(s.size()%k!=0){
                vec.emplace_back(sum);
            }
            sum=0;
            t = k;
            s="";
            
            for(int& i : vec){
                if(i==0){
                    s+=48;
                    continue;
                }
                while(i>0)
                {
                    n=i%d;
                    ch.push_back((n+48));
                    i/=10;
                }
                for(int i=ch.size()-1; i>-1; i--){
                    s+=ch[i];
                }
                ch.clear();
            }
         
            vec.clear();
        }
        return s;
    }
};