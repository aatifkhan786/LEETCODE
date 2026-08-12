class Solution {
public:
    string simplifyPath(string path) {

        vector<string> st;

        string current = "";

        // Path ke har character ko check karo
        for (int i = 0; i <= path.size(); i++) {

            // Slash ya string ka end aa gaya
            if (i == path.size() || path[i] == '/') {

                // Current part empty hai
                // Example: "//"
                if (current == "") {
                    // Kuch nahi karna
                }

                // Current directory "."
                else if (current == ".") {
                    // Kuch nahi karna
                }

                // Parent directory ".."
                else if (current == "..") {

                    // Root se upar nahi ja sakte
                    if (!st.empty()) {
                        st.pop_back();
                    }
                }

                // Normal directory name
                else {
                    st.push_back(current);
                }

                // Next directory ke liye empty
                current = "";
            }

            else {
                current += path[i];
            }
        }

        // Final answer
        string ans = "";

        for (int i = 0; i < st.size(); i++) {
            ans += "/";
            ans += st[i];
        }

        // Agar stack empty hai → root
        if (ans == "") {
            return "/";
        }

        return ans;
    }
};