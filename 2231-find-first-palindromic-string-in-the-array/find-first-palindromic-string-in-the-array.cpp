class Solution {
public:

    bool isPalindrome(string s){
        string t = "";
        for(int i = s.size() - 1; i >= 0; i--){
            t += s[i];
        }

        return t == s;
    }

    string firstPalindrome(vector<string>& words) {
        
        for(string word : words){
            if(isPalindrome(word)){
                return word;
            }
        }

        return "";
    }
};