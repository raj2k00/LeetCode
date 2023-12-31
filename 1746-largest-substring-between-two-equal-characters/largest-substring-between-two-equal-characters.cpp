class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        int ans = -1;
        int n = s.size();

        for(int  i = 0; i < n; i++){
            for(int j = n - 1; j >= i; j--){
                if(s[i] == s[j]){
                    ans = max(ans, j-1 - i);
                }
            }
        }

        return ans;   
    }
};