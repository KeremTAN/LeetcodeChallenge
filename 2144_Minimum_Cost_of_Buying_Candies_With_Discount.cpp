class Solution {
public:
    int minimumCost(vector<int>& cost) {
        priority_queue<int> pq;
        int candy;
        for(int& c : cost)
            pq.push(c);
        
        int ans = 0;
        while(pq.size())
        {
            candy = pq.top();
            pq.pop();
            ans+=candy;
            if(pq.size())
            {
                candy = pq.top();
                pq.pop();
                ans+=candy;
                if(pq.size())
                    pq.pop();
            }
        }
        return ans;
    }
};