class Solution {
public:
    string customSortString(string order, string s) {
        string custom;
        vector<int> freq(26, 0);
        for (char c: s) {
            freq[c - 'a']++;
        }
        for (char c: order) {
            while (freq[c - 'a']) {
                custom += c;
                freq[c - 'a']--;
            }
        }
        for (int i = 0; i < 26; i++) {
            while (freq[i]) {
                custom += i + 'a';
                freq[i]--;
            }
        }
        return custom;
    }
};