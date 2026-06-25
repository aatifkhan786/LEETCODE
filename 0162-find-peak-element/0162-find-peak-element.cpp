class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int st=0;
        // int end=nums.size()-1;
        // while(st<=end){
        //     int mid=(start+(start-end))/2;
        //     if()
        // }
        int max=nums[0];
        int maxIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                maxIndex=i;
            }
        }
        return maxIndex;
        
    }
};