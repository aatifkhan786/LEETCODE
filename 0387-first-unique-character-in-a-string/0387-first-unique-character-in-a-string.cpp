class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }
        return -1;
        // int i = 0;
        // int j = s.size();
        // while (i < j) {
        //     if (s[i] != s[j]) {
        //         j--;
        //     } else {
        //         i++;
        //     }
        // }
    }
};