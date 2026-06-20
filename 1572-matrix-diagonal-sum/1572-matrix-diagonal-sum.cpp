class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int sum=0;
        vector<int>ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    ans.push_back(mat[i][j]);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=n-1;j>=0;j--){
                if(i+j==n-1&& i!=j ){
                    ans.push_back(mat[i][j]);
                }
            }
        }
        
        for(int i=0;i<ans.size();i++){
            sum=sum+ans[i];
        }
        return sum;
    }
};