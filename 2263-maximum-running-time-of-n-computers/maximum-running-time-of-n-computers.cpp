class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {

        long long sumPower = 0;

        for(int battery : batteries){
            sumPower += battery;
        }
        
        long long left = 1 , right = sumPower / n;

        while(left < right){

            long long target = right - (right - left) / 2;

            long long extra = 0 ;

            for(long long power : batteries){
                extra += min(power, target);
            }

            if(extra >= (long long)( n * target)){
                left = target;
            }

            else right = target - 1;

        }

        return left;        
    }
};