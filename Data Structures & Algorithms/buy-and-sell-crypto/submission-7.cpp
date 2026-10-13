class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int right = 1, minPrices = prices[0], ans = 0;
        while(right < prices.size()){
            minPrices = min(prices[right], minPrices);
            ans = max(ans, prices[right] - minPrices);
            right++;
        }
        return ans;
    }
};