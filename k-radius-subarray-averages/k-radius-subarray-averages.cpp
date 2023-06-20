class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k == 0) return nums;
        
        int n = nums.size();
        vector <int> ans (n, -1);

        // if no index have k elements in its left and right
        if( 2 * k + 1 > n) return ans;

        long long windowSum = 0;

        for(int i = 0 ; i < ( 2 * k + 1); i++){
            windowSum += nums[i];
        }

        ans[k] = windowSum / (2 * k + 1) ;

        cout << windowSum << endl;

        for(int i = (2 * k + 1); i < n; ++i ){
            windowSum = windowSum - nums[i - (2 * k + 1)] + nums[i];
            ans[i - k] = windowSum / (2 * k + 1);
        }

        return ans;

    }
};