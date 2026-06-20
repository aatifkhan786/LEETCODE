class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int sRow=0,eRow=m-1,sCol=0,eCol=n-1;
        vector<int>ans;
        while(sRow<=eRow && sCol<=eCol){
            //top
            for(int j=sCol;j<=eCol;j++){
                ans.push_back(matrix[sRow][j]);
            }
            //right
            for(int o=sRow+1;o<=eRow;o++){
                ans.push_back(matrix[o][eCol]);
            }
            //bottom
            for(int k=eCol-1;k>=sCol;k--){
                if(sRow==eRow){
                    break;
                }
                ans.push_back(matrix[eRow][k]);
            }
            //left
            for(int j=eRow-1;j>=sRow+1;j--){
                if(sCol==eCol){
                    break;
                }
                ans.push_back(matrix[j][sCol]);
            }
            sRow++;eRow--;sCol++;eCol--;
        }
        return ans;
    }
};