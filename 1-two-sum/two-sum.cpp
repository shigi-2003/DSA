class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i=0; i<n; i++){
            int otherPair = target - nums[i];

            if(mp.find(otherPair) != mp.end()){
                return {mp[otherPair], i};
            }

            mp[nums[i]] = i;
        }
        return {};

    }
};