class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map <int,int> mp;

        for(auto i : arr){
            mp[i]++;
        }

        int high = -1;
        int val = 0;

        for(auto i: mp){
            if(i.second > high){
                val = i.first;
                high = i.second;
            }
        }

        return val;

        
    }
};