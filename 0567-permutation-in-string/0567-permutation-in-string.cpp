class Solution {
        
public:
    
    bool compareArray(vector <int> a, vector <int> b ){
        for(int i = 0; i < 26 ; i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    };
        
    
    
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size() > s2.size()) return false;
        
        vector <int> pattern (26,0);
        vector <int> text (26,0);
        
        for(char x : s1){
            text[x - 'a']++;
        }
        
        
        int i = 0;
        int j = 0;
        
        while(j < s2.size()){
            
            pattern[s2[j] - 'a']++; 
            
            if( j - i + 1 == s1.size()){
                if(compareArray(text, pattern)) return true;
            }
            
            if( j - i + 1 < s1.size()){
                j++;
            }
            
            else{
                pattern[s2[i] - 'a']--;  // removing first element from window;
                i++;
                j++;
                
            }
            
            
        }
        
        return false;
        
    }
};