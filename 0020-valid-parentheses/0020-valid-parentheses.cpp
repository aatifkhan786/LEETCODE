class Solution {
public:
    bool isValid(string s) {
        stack<char>ch;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='('|| c=='['||c=='{'){
                ch.push(c);
            }
            else{
                if(ch.empty())return false;
                if(c==')'&&ch.top()!='('||c==']'&&ch.top()!='['||c=='}'&&ch.top()!='{'){
                    return false;
                }
                ch.pop();
            }
        }
        return ch.empty();

    }
};