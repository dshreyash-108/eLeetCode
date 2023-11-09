class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0)
        {
            return 0;
        }
        vector<int> x;
        x.push_back(prices[0]);
        int max_profit = 0;
        for (int i = 1; i < n ; i++) {  
            if (prices[i] < x.back()) {
                x.push_back(prices[i]);
            }
            else 
            {
                x.push_back(x[i-1]);
            }
        }
        for(int j = 0; j<x.size(); j++)
        {
            if(prices[j]-x[j]>max_profit)
            {
                max_profit = prices[j]-x[j];
            }
        }
        return max_profit;
    }
};