class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue <int> q;

        for(int i = 0; i < nums.size(); i++){
            q.push(nums[i]);
        }

        for(int i = k - 1; i >= 0; i-- ){
            int top = q.top();
            if(i == 0) return top;
            q.pop();
        }

        return -1;
        // sort(nums.begin(),nums.end());
        // return nums[nums.size() - k];
    }
};