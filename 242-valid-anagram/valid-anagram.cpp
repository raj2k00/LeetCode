class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> hash (265,0);
        
        if(s.size() != t.size()) return false;

        for(int i = 0; i < s.size(); i++){
            hash[s[i]]++;
        }

        for(int i = 0; i < t.size(); i++){
            hash[t[i]]--;
        }

        for(int i = 0; i < hash.size(); i++){
            if(hash[i] != 0) return false;
        }

        return true;
    }
};