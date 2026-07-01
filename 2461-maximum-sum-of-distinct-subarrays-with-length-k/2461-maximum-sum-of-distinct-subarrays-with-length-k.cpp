class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long sum = 0;
        long long maxi = 0;

        unordered_map<int, int> mp;
        int dups = 0;

        // First Window
        for (int i = 0; i < k; i++) {

            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = 0;
            }

            mp[nums[i]] = mp[nums[i]] + 1;

            sum = sum + nums[i];

            if (mp[nums[i]] > 1) {
                dups = dups + 1;
            }
        }

        if (dups == 0) {
            maxi = max(maxi, sum);
        }

        // Sliding Window
        for (int i = k; i < nums.size(); i++) {

            int numToAdd = nums[i];
            int numToRemove = nums[i - k];

            if (mp.find(numToAdd) == mp.end()) {
                mp[numToAdd] = 0;
            }

            mp[numToAdd] = mp[numToAdd] + 1;

            if (mp[numToAdd] > 1) {
                dups = dups + 1;
            }

            sum = sum + numToAdd;

            if (mp[numToRemove] > 1) {
                dups = dups - 1;
            }

            mp[numToRemove] = mp[numToRemove] - 1;

            sum = sum - numToRemove;

            if (dups == 0) {
                maxi = max(maxi, sum);
            }
        }

        return maxi;
    }
};