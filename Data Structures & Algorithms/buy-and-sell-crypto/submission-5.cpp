class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0], maxProfit = 0, right = 1;
        while(right < prices.size()){
            minPrice = min(minPrice, prices[right]);
            maxProfit = max(maxProfit, prices[right] - minPrice);
            right++;
        }
        return maxProfit;
    }
};
