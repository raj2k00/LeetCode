class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int, int> hash;
        unordered_set <int> s;

        for(int i : arr){
            hash[i]++;
        }

        for(auto i : hash){
            s.insert(i.second);
        }

        return hash.size() == s.size();
    }
};