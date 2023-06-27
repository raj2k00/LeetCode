class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = "";

        int opened = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' && opened++ > 0 ) ans += s[i];
            if(s[i] == ')' && opened-- > 1) ans += s[i];
        }

        return ans;

    }
};