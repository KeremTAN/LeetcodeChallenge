class Solution
{
public:
    vector<int> decrypt(vector<int>& code, int k)
    {
        int ix=0, size=code.size();
        vector<int> ret(size, 0);
        if (k == 0)
            return ret;
        else
        {
            for (int i = 0; i < size; i++)
            {
                ix = 0;
                if (k > 0)
                {
                    for (int j = i + 1; ix < k; j++)
                    {
                        if (j == size)
                            j = 0;
                        ret[i] += code[j];
                        ix++;
                    }
                }
                else if (k < 0)
                {
                    for (int j = i - 1; ix > k; j--)
                    {
                        if (j < 0)
                            j = size - 1;
                        ret[i] += code[j];
                        ix--;
                    }
                }
            }
        }
        return ret;
    }
};