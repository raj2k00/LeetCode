class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int i = 0;
        int maxValue = values[i] + i;
        
        for(int j = 1; j < values.size(); ++j){
            
            int currMax = values[i] + values[j] + i - j;
            
            maxValue = max(currMax, maxValue);
            
            if(values[i] + i < values[j] + j){
                i = j;
            }
            
        }
        
        return maxValue;
        
    }
};