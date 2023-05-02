class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector <int> mem (n+1, -1);
        mem[n] = 1;
        
        return s.empty() ? 0 : numDecodings(0, s , mem);
    }
    
    int numDecodings(int p , string &s, vector <int> &m){
        
        int n = s.length();
        
        if(m[p] > -1) return m[p];
        
        if(s[p] == '0') return m[p] = 0;
        
        int res = numDecodings(p+1, s, m);
        
        if(p < n - 1 && ( s[p] == '1' || (s[p] == '2' && s[p+1] < '7' ))) res += numDecodings(p+2,s,m);
        
        return m[p] = res;
        
    }
};