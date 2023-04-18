class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        vector <string> ans;
        
        unordered_set <string> temp;
        
        sort(words.begin(), words.end());
        
        
        for(int i = words.size() - 1; i >= 0; i--){
            for(int j = words.size() - 1 ; j >= 0; j--){
                if(words[i].find(words[j]) != string::npos && words[i] != words[j]){
                    
                    temp.insert(words[i].length() > words[j].length() ? words[j] : words[i]);
                }
            }
        }
        
        for(auto i : temp){
            ans.push_back(i);
        }
        
        return ans;
    }
};