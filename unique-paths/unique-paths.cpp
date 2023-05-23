class Solution {

private:
    unordered_map <string , int> mp;

public:
    int uniquePaths(int m, int n) {
        
        string key = to_string(m) + "," + to_string(n);

        if(mp.find(key) != mp.end()) return mp[key];

        if( m == 1 && n == 1) return 1;
        if( m == 0 || n == 0) return 0;

        mp[key] = uniquePaths(m - 1, n) + uniquePaths(m , n - 1);

        return mp[key];

    }
};