class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int pair = 0;
        int left=0;
        int i;
        for (i = 0; i < nums.size() - 1;) {
            if (nums[i] == nums[i + 1]) {
                pair++;
                i = i + 2;
            } else {
                left++;
                i++;
                
            }
        }
        if (i == nums.size() - 1) {
            left++;
        }
        // int left = nums.size() - 2 * pair;

        return {pair, left};
    }
};