class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";

        int n = num1.size();
        int m = num2.size();
        vector<int> result(n + m, 0);

        for (int i = n - 1; i >-1; i--) {
            for (int j = m - 1; j >-1; j--) {
                int product = (num1[i] - 48) * (num2[j] - 48);
                int sum = product + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        string ret;
        ret.reserve(n+m);

        int ix = result[0]!=0 ? 0 : 1;
        while (ix<result.size()) {
            ret += (result[ix++] + 48);
        }

        return ret;
    }
};