class Solution {
public:
    
    vector <int> failure_function (string pattern){
        
        int m = pattern.length();
        
        vector <int> res(m);
        
        int j = 0;
        
        for(int i = 1; i < m; i++ ){
            
            while( j > 0 && pattern[i] != pattern[j]){
                j = res[j - 1];
            }
            
            if( pattern[i] == pattern[j]){
                cout << "in" << endl;
                j++;
            }
            
            res[i] = j;
            
        }
        
        return res;
        
    }
    
    int strStr(string haystack, string needle) {
        
        int n = haystack.size();
        
        vector <int> failure_array =  failure_function(needle);
        
        int m = needle.size();
        
        int j = 0;
           
        for(int i = 0; i < n; i++){
            
            while( j > 0 && haystack[i] != needle[j]){
                j = failure_array[j - 1];
            }
            
            if( haystack[i] == needle[j]){
                j++;
            }
            
            if( j == m ){
                return i - m + 1;
            }
        }
        
        return -1;
        
    }
};