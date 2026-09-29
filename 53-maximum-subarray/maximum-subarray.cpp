class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
   
            int sum = nums[0];
            int ans = nums[0];

            for(int j = 1 ; j<n; j++){
              sum = max(nums[j], sum+nums[j]);
                ans = max(ans,sum);
            }
        return ans;
    }
};