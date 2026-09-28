class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();


        int small_num = INT_MAX;
        int big_num = INT_MIN;
        int ans = 0;

        for(int i = 0; i<n ; i++){
            if(prices[i] < small_num){
                small_num = prices[i];
            }

            int profit = prices[i] - small_num;

            if(profit > ans){
                ans = profit;
            }
        }

        return ans;
    }
};