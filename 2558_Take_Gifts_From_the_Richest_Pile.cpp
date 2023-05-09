class Solution 
{
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        priority_queue<long long> pq;

        for(int& it : gifts)
            pq.push(it);

        long long ret=0, tmp;
        while(k--)
        {
            tmp = sqrt(pq.top());
            pq.pop();
            pq.push(tmp);
        }
            
        while(!pq.empty())
        {
            ret += pq.top();
            pq.pop();
        }
        return ret;
    }
};