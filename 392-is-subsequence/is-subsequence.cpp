class Solution {
public:
    bool isSubsequence(string s, string t) {

        if(s.size() > t.size()) return false;

        int len = 0;
        int sen = 0;

        for(int i = 0; i < t.size(); i++){
            if(s[sen] == t[i] && sen <= s.size()){
                len++;
                sen++;
            }
        }
        return len == s.size();
    }
};