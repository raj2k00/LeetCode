class Solution {
public:

    unordered_map <char , vector <char>> hash =   {
        {'2' , {'a', 'b', 'c'}},
        {'3' , {'d', 'e', 'f'}},
        {'4' , {'g', 'h', 'i'}},
        {'5' , {'j', 'k', 'l'}},
        {'6' , {'m', 'n', 'o'}},
        {'7' , {'p', 'q', 'r','s'}},
        {'8' , {'t', 'u', 'v'}},
        {'9' , {'w', 'x', 'y','z'}},
    };

    vector<string> letterCombinations(string digits) {
        vector <string> ans;
        string curr;
        int n = digits.size();
        int index = 0;
        if(n == 0) return ans;
        backtrack(ans, curr, digits, n , index);
        return ans;
    }

    void backtrack(vector <string> &ans , string &curr ,string &digits,  int n, int index){
        
        if(index == n){
            ans.push_back(curr);
            return;
        }

        vector <char> alpa = hash[digits[index]];

        for(int j = 0; j < alpa.size(); j++){
        curr.push_back(alpa[j]);
        backtrack(ans, curr, digits, n, index+1);
        curr.pop_back();
        }
    }
};