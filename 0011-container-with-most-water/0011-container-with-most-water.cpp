class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int lp=0,rp=height.size()-1;
        while(lp<rp){
            int width=rp-lp;
            int h = min(height[lp],height[rp]);
            int container = width * h;
            ans = max(ans, container);
            height[lp]>height[rp] ? rp-- : lp++; //ternary operator 
        }
        return ans;
        
    }
};