class Solution {
public:

    bool isPalindrome(string s) {
        string result = "";
        for(int i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
            if(isalnum(s[i])){
                result += s[i];
            }
        }
        int i = 0;
        int j = result.size()-1;
        while(i < j){
            if(result[i] != result[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};