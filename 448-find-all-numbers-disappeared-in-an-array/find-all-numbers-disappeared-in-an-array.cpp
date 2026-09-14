class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

       set<int> st;
       vector<int> ans;

        for(int i = 0; i<n; i++){
           st.insert(nums[i]);
        }

        vector<int> stv(st.begin(), st.end());
        
        int size = stv.size();

        int j = 1;
        int k = 0;

        while(j <= n){
            if(k< size && j == stv[k]){
                j++;
                k++;
            }
            else{
                ans.push_back(j);
                j++;
            }
        }

        return ans;
    }
};