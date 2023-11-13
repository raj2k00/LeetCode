class Solution {
public:
    string sortVowels(string s) {
        
        set <char> vowels = {'A', 'E', 'I', 'O','U', 'a','e','i','o','u'};

        vector <char> foundVowels;
        
        string p = s;
        
        for(int i = 0; i < s.size(); i++){
            if(vowels.find(s[i]) !=vowels.end()){
                foundVowels.push_back(s[i]);
            }
        }
        
        sort(foundVowels.begin(), foundVowels.end());
        
        int n = foundVowels.size();
        int count = 0;
        
        for(int i = 0; i < p.size(); i++){
            if(vowels.find(p[i]) !=vowels.end()){
                p[i] = foundVowels[count++];
            }
        }
        
        return p;
        
        
    }
};