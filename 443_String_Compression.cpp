class Solution {
public:
    int compress(vector<char>& chars) {
        int i{}, ix{};
        while(i<chars.size()){
            const char c = chars[i];
            int counter{};

            while(i<chars.size() && chars[i]==c){
                counter++;
                ++i;
            }

            chars[ix++]=c;

            if(counter>1)
                for(const char& d : to_string(counter))
                    chars[ix++]=d;
        }
        return ix; 
    }
};