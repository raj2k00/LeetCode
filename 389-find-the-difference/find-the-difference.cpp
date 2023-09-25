class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char, int> end;

        for(int i = 0; i < s.size(); i++){
            end[s[i]]++;
        }

        for(int i = 0; i < t.size(); i++){
            if(end[t[i]] > 0){
                end[t[i]]--;
            }else{
                return t[i];
            }
        }

        return 'a';
    }
};