class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int maxSum=0;
      
        for(int i=0;i<k;i++){
            maxSum+=nums[i];
        }
        int ans=maxSum;
        for(int i=k;i<nums.size();i++){
            maxSum=maxSum-nums[i-k]+nums[i];
            ans=max(maxSum,ans);
        }
        
        return (double)ans / k;
    }
};