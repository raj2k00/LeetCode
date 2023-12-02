class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

     vector <int> counts (26,0);
     int ans = 0;

     for(auto c : chars){
        counts[c - 'a']++;
     }

     for(auto i : words){

       vector <int> wordCount (26,0);

        bool canForm = true;

        for(auto j : i){
            wordCount[j - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if (counts[i] < wordCount[i]) {
                canForm = false;
            }
        }

        if(canForm) ans +=  i.size();
     }

     return ans;
     

    }
};