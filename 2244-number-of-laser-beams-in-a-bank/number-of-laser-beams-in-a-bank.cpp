class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        unordered_map <int, int> mp;
        int ans = 0;
        int n = bank.size();

        for(int i = 0; i < n; i++){
            for(char c : bank[i]){
                if(c == '1'){
                    mp[i]++;
                }
            }
        }

        int i = 0;
        int j = 1;

        while(i < j && i < n - 1 && j < n){
            if(mp[i] && mp[j]){
                ans += mp[i] * mp[j];
                i = j;
                j++;
            }else if(mp[j] == 0){
                j++;
            }else if(mp[i] == 0){
                i++;
                j++;
            }else if(mp[i] && mp[j] == 0){
                j++;
            }else{
                i++;
                j++;
            }
        }
        return ans;

        
    }
};