class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int closestSum = nums[0] + nums[1] + nums[2];
        int minDiff = abs(target - closestSum);

        for (int i = 0; i < nums.size() - 2; i++) {

            for (int j = i + 1; j < nums.size() - 1; j++) {

                for (int k = j + 1; k < nums.size(); k++) {

                    int sum = nums[i] + nums[j] + nums[k];
                    int diff = abs(target - sum);

                    if (diff < minDiff) {
                        minDiff = diff;
                        closestSum = sum;
                    }
                }
            }
        }

        return closestSum;
    }
};