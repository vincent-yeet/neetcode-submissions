class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                int difference = prices[j] - prices[i];
                if (difference > max_profit) {
                    max_profit = difference;
                }
            }
        }
        return max_profit;
    }
};
