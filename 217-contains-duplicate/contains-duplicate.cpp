class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> duplicate;

        for(int i=0; i<n; i++){
            if(duplicate.count(nums[i])){
                return true;
            }
            duplicate.insert({nums[i], 1});
        }
        return false;
    }
};