class Solution {
public:

    double timeRequired(vector<int>& dist, int speed, int n){

        double timeTaken = 0.0;

        for(int i = 0; i < n; i++){
           double t = (double) dist[i] / (double) speed;
           timeTaken += (i == n - 1) ? t : ceil(t);
        }

        return timeTaken;
    }


    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int low = 1, high = 1e7, minSpeed = -1;

        int n = dist.size();

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(timeRequired(dist, mid, n) <= hour){
                minSpeed = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return minSpeed;

    }
};