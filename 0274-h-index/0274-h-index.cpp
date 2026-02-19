class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int h=0;
        for (int i = 1; i <= n; i++) {
            int count=0;
            for (int j = 0; j < n; j++) {
                if (citations[j]>=i) {
                    count++;
                }
            }
            if (count >= i) {
                h = i;
            }
        }
        return h;
    }
};