class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        unordered_map <string, string> hash;

        int n = paths.size();

        if(n == 1) return paths[0][1];

        for(auto i : paths ){
            hash[i[0]] = i[1];
        }

        for(auto i: paths){
           if (hash[i[1]].size() == 0) return i[1];
        }

        return "";
    }
};