class Solution {
public:
    bool helperLogic(int i,int j, string s){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i=i+1;
            j=j-1;
            
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            char left=s[i];
            char right=s[j];
            if(left!=right){
                return helperLogic(i+1,j,s) || helperLogic(i,j-1,s);
            }else{
                i=i+1;
                j=j-1;
            }
        }
        return true;
    }
};