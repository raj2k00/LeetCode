class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        vector <int> hash(26,0);

        for(auto i : words){
            for(int j = 0; j < i.size(); j++){
                hash[i[j] - 'a']++;
            }
        }

        int n = words.size();

        for(int val : hash){
            if(val % n != 0){
                return false;
            }
        }

        return true;
    }
};