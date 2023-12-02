class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

     unordered_map <char, int> input;
     int ans;

     for(auto i : chars){
         input[i]++;
     }

     for(auto i : words){

        unordered_map <char, int> curr;
        bool canForm = true;

        for(auto j : i){
            curr[j]++;
        }

        for(auto k : curr){
            if (input[k.first] < k.second) {
                canForm = false;
            }
        }

        if(canForm) ans +=  i.size();
     }

     return ans;
     

    }
};