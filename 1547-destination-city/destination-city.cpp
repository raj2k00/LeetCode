class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        string ans = "";

        unordered_map <string, string> hash;

        int n = paths.size();

        if(n == 1) return paths[0][1];


        for(auto i : paths ){
            hash[i[0]] = i[1];
        }

        for(auto i: paths){
            string s = hash[i[1]];
            if( s.size() > 0){
                continue;
            }else{
                return i[1];
            }
        }

        return ans;


        
    }
};