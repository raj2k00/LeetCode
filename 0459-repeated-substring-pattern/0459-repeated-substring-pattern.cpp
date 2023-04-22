class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int j = 0;
        
        int k = s.size();
        
        if(k == 1) return false;
        
        vector <int> arr (k,0);
        
        for(int i = 1; i < k; i++){
            
            while( j > 0 && s[i] != s[j]){
                j = arr[j - 1];
            }
            
            if(s[i] == s[j]){
                j++;
            }
            
            arr[i] = j;
        }
        
       return arr[k - 1] && k % (k - arr[k - 1]) == 0 ? true : false;
    
        
    }
};