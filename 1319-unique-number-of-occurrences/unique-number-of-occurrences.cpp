class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int, int> hash;
        unordered_map <int, int> total;

        for(int i : arr){
            hash[i]++;
        }

        for(auto i : hash){
            if(total.count(i.second)) return false;
            total[i.second]++;
        }

        return true;
    }
};