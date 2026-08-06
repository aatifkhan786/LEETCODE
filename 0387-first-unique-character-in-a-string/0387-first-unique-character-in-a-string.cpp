class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char, int> freq;
        // for (int i = 0; i < s.size(); i++) {
        //     freq[s[i]]++;
        // }
        // for (int i = 0; i < s.size(); i++) {
        //     if (freq[s[i]] == 1) {
        //         return i;
        //     }
        // }
        // return -1;
   
        unordered_set<char>seen;
        unordered_set<char>duplicate;

        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(seen.find(ch) == seen.end()){
                seen.insert(ch);
            }else{
                duplicate.insert(ch);
            }
        }
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(duplicate.find(ch)==seen.end()){
                return i;
                break;
            }
        }
        return -1;
    }
};