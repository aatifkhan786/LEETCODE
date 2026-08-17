class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans;
        string ans1 = "";
        string ans2 = "";

        while (ss >> word) {
            if (!ans.empty())
                ans += " ";
            ans += word;
        }

        for (int i = ans.size() - 1; i >= 0; i--) {
            if (ans[i] != ' ') {
                ans1 += ans[i];
            }
            else {
                reverse(ans1.begin(), ans1.end());
                ans2 += ans1 + " ";
                ans1 = "";
            }
        }
        reverse(ans1.begin(), ans1.end());
        ans2 += ans1;

        return ans2;
    }
};