class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int counter=0;
        unordered_map<string, int> map, map2;
        for(string& s1 : words1)
            map[s1]++;
        for(string& s2 : words2)
            map2[s2]++;
        for(auto& it1 : map){
            if(it1.second == 1){     
                for(auto& it2 : map2){
                    if(it2.second == 1)
                        if(it1.first == it2.first) counter++;
                }           
            }
        }
        return counter;
    }
};