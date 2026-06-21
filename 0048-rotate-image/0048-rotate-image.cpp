class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int sRow=0,eRow=m-1,sCol=0,eCol=n-1;
        vector<vector<int>> ans;
        for(int col = sCol; col <= eCol; col++) {
            vector<int> temp;
            for(int row = eRow; row >= sRow; row--) {
                temp.push_back(matrix[row][col]);
            }
            ans.push_back(temp);
        }

        matrix = ans;
    }
};