class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        vector <float> arrivalTime;
        int ans = 0;

        for(int i = 0; i < speed.size(); i++){
            arrivalTime.push_back((float) dist[i]/speed[i]);
        }

        sort(arrivalTime.begin(), arrivalTime.end());

        for(int i = 0; i < arrivalTime.size(); i++){
            if(arrivalTime[i] <= i){
                break;
            }
            ans++;
        }

        return ans;
    }
};