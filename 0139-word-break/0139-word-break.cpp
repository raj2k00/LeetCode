class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict;
        vector<bool> dp(s.size() + 1);
        for (auto word : wordDict) {
            dict.insert(word);
        }

        for (int i = 0; i < s.size(); i++) {
            if (dict.count(s.substr(0, i + 1)))
                dp[i] = true;
            for (int j = i - 1; j >= 0; j--) {
                if (dp[j] && dict.count(s.substr(j + 1, i - j))) {
                    dp[i] = true;
                }
            }
        }
        return dp[s.size() - 1];
    }
};