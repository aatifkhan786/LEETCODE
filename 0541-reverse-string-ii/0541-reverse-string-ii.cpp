class Solution {
public:

    void reverse(string &s, int i, int j) {
        while(i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    string reverseStr(string s, int k) {
        int i = 0;
        int n = s.size();
        while(i < n) {
            int j = min(i + k - 1, n - 1);
            reverse(s, i, j);
            i = i + 2 * k;
        }

        return s;
    }
};