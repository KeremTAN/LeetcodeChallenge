class Solution {
public:
    string addBinary(string a, string b) {
        size_t sizeA = a.size();
        size_t sizeB = b.size();
        int r = 0;
        stack<char> added;
        string ret;

        if (sizeA < sizeB)
            a = string(sizeB - sizeA, '0') + a;
        else if (sizeB < sizeA)
            b = string(sizeA - sizeB, '0') + b;

        chk(a, b, r, added);

        if (r)
            added.push('1');

        while (!added.empty()) {
            ret += added.top();
            added.pop();
        }

        return ret;
    }

    void chk(const string& a, const string& b,
            int& r, stack<char>& added)
    {
        for (int i = a.size() - 1; i >-1; i--) {
            if (a[i] + b[i] + r - 96 < 2) {
                added.push(a[i] + b[i] + r - 48);
                r = 0;
            }
            else if(a[i] + b[i] + r - 96 != 3){
                added.push('0');
                r = 1;
            }
            else {
                added.push('1');
                r = 1;
            }
        }
    }
};