class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
		int target = nums[0];
		for(int i=0;i<nums.size();i++){
		    if(nums[i]==target){
			    cnt++;
			}else{
			    cnt--;
				if(cnt==0){
				    target=nums[i];
					cnt=1;
				}
			}
		}
		return target;
    }
};