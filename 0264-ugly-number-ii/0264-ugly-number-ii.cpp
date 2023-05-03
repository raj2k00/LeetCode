class Solution {
public:
    int nthUglyNumber(int n) {
        
        if( n <= 0) return false;
        if( n == 1) return true;
        
        vector <int> ugly(n);
        
        ugly[0] = 1;
        
        int pt2 = 0, pt3 = 0, pt5 = 0;
        
        for(int i = 1; i < n; ++i){
            
            ugly[i] = min(ugly[pt2] * 2, min(ugly[pt3] * 3, ugly[pt5] * 5));
            
            if(ugly[i] == ugly[pt2] * 2) pt2++;
            if(ugly[i] == ugly[pt3] * 3) pt3++;
            if(ugly[i] == ugly[pt5] * 5) pt5++;
 
            
        }
        
        return ugly[n - 1];
        
    }
};