class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int charCount[256] = {0};
        
        if(s.size() != t.size()) return false;
        
        for(int i = 0; i < s.size(); i++){
            charCount[s[i]]++;
        }
        
        for(int i = 0; i < t.size(); i++){
            charCount[t[i]]--;
        }
        
        for(int i = 0; i < 156; i++){
            if(charCount[i] != 0) return false;
        }
        
        return true;
    }
};