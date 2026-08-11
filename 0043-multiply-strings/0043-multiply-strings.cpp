class Solution {
public:
    string multiply(string num1, string num2) {

        if (num1 == "0" || num2 == "0")
            return "0";

        int n = num1.size();
        int m = num2.size();

        vector<int> ans(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {

            for (int j = m - 1; j >= 0; j--) {

                int a = num1[i] - '0';
                int b = num2[j] - '0';

                ans[i + j + 1] += a * b;
            }
        }

        // Carry handle
        for (int i = ans.size() - 1; i > 0; i--) {

            ans[i - 1] += ans[i] / 10;
            ans[i] = ans[i] % 10;
        }

        string result = "";

        int i = 0;

        // Starting zero remove
        while (i < ans.size() && ans[i] == 0)
            i++;

        while (i < ans.size()) {
            result += to_string(ans[i]);
            i++;
        }

        return result;
    }
};