class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.size() == 0 || s.size() == 1) return true;
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        string alphabets = "abcdefghijklmnopqrstuvwxyz1234567890";
        
        string res;
        
        for(int i = 0; i < s.size() ; i++){
            if(alphabets.find(s[i]) != -1){
                res += s[i];
            }
        }
        
        if(res.size() == 0 || res.size() == 1) return true;
        
        int i = 0;
        int j = res.size() - 1;
        
        while(i <= res.size()/2 && j >= res.size()/2){
            if(res[i] != res[j]) return false;
            i++;
            j--;
        }
        
        return true;
        
    }
};