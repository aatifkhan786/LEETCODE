class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int pair = 0;
        for (int i = 0; i < nums.size() - 1;) {
            if (nums[i] == nums[i + 1]) {
                pair++;
                i = i + 2;
            } else {
                i++;
            }
        }

        int left = nums.size() - 2 * pair;

        return {pair, left};
    }
};