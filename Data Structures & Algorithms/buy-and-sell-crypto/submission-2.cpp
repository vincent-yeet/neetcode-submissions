class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int day_1 = 0;
        int day_2 = 0;
        int diff = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < prices[day_1]) {
                day_1 = i;
                day_2 = i;
            } else if (prices[i] > prices[day_2]) {
                day_2 = i;
                if (prices[day_2] - prices[day_1] > diff) {
                    diff = prices[day_2] - prices[day_1];
                }
            }
        }
        return diff;
    }
};
