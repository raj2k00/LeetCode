class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.empty()) return true;
        
        int j = s.size() - 1;
        
        int i = 0;
        
        while (i < j){
            
            if(!isalnum(s[i])) {
                i++;
                continue;
            }
            
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            
            if(tolower(s[i++]) != tolower(s[j--])) return false;
            
        }
        
        
        return true;
        
    }
};