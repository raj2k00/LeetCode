class Solution {
public:


    string frequencySort(string s) {
        unordered_map <char, int> mp;

        for(int i = 0; i < s.size();  i++){
            mp[s[i]]++;
        }
     

        vector <pair<int, char>> hash;

        for(auto i : mp){
            hash.push_back({i.second, i.first}); 
        }

        sort(hash.begin(), hash.end(), [](const pair<int, char> &a, const pair<int, char> &b){
        return a.first > b.first;
    });

    string ans = "";

        for(auto i:  hash){
           for(int j = 0; j < i.first ; j++){
               ans += i.second;
           }
        }

        return ans;
    }
};