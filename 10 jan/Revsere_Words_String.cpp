class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string x;

      s
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (!x.empty()) {
                    ans.push_back(x);
                    x.clear();
                }
            } else {
                x = x + s[i];
            }
        }

        
        if (!x.empty()) {
            ans.push_back(x);
        }

        
        string final1;
        for (int i = ans.size() - 1; i >= 0; i--) {
            final1 = final1 + ans[i] + ' ';
        }

        
        if (!final1.empty()) {
            final1.pop_back();
        }

        return final1;
    }
};
