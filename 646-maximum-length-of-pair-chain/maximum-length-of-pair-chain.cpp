class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; });

        for(auto i : pairs){
            cout << i[0] << " " << i[1];
        }

        int count = 1;

        vector <int> currentPair = pairs[0];

        for(int i = 1; i < pairs.size(); i++){
            if(currentPair[1] < pairs[i][0]){
                count++;
                currentPair = pairs[i];
            }
        }

        return count;
    }
};