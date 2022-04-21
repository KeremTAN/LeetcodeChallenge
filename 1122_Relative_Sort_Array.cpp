class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> map;
        for(const int& n : arr1)
            map[n]++;
        
        int ix=0;
        for(const int& n2 : arr2){
            for(int i=0; i<map[n2]; i++)
                arr1[ix++]=n2;
            map.erase(n2);
        }
        
       for(const auto& [key, value] : map){
           for(int i=0; i<value; i++)
               arr1[ix++]=key;
       }
        
        return arr1;
    }
};