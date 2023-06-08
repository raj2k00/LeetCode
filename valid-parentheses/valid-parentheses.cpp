class Solution {
public:
    bool isValid(string s) {
        stack <char> p;

        for(int i = 0; i < s.size(); i++){     
            if(s[i] == '(') p.push(')');
            else if(s[i] == '[') p.push(']');
            else if(s[i] == '{') p.push('}');
            else if(p.empty() || p.top() != s[i] ) return false;
            else p.pop();
        }

        return p.empty();
    }
};