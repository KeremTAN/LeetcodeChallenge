class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0, tmp1, tmp2;
        stack<int> st;
        
        for(int i=0; i<ops.size(); i++){
            
            if(ops[i]=="C"){
                st.pop();
            }
            
            else if (ops[i]=="D"){
                st.push((st.top()*2));
            }
            
            else if (ops[i]=="+"){
                tmp1 = st.top();
                st.pop();
                tmp2 = st.top();
                st.pop();
                st.push(tmp2);
                st.push(tmp1);
                st.push(tmp1+tmp2);
            }
            
            else{
                st.push((stoi(ops[i])));
            }
        }
        
        while(!st.empty()){
                sum+=st.top();
                st.pop();
            }
        
        return sum;
        
    }
};