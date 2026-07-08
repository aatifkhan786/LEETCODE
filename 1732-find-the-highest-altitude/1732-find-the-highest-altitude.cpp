class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        vector<int> ans;
        int sum = 0;

        for (int i = 0; i < gain.size(); i++) {
            ans.push_back(sum);
            sum = sum + gain[i];
        }

        ans.push_back(sum);

        int maxi = ans[0];

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] > maxi) {
                maxi = ans[i];
            }
        }

        return maxi;
    }
};