#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, j;
        int profit = 0;
        int max_profit = 0;
        
        for(i=(int)prices.size()-1; i>=0; i--)
        {
            for(j=i; j>=0; j--)
            {
                profit = prices[i] - prices[j];
                if(profit > max_profit)
                    max_profit = profit;
            }
        }
    
        return max_profit;
    }
};
