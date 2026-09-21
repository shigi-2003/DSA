class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int n = nums.size();

        vector<int> sq;

        for(int i= 0; i<n;i++){

            int square = nums[i] * nums[i];
            sq.push_back(square);
        }

        sort(sq.begin(), sq.end());
        return sq;
    }
};