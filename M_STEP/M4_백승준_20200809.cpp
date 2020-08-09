class Solution
{
public:
    int minCostClimbingStairs(vector<int>& cost)
    {
        int i;
        cost.push_back(0);
        
        for(i=2; i<cost.size(); i++)
            cost[i] += min(cost[i-1], cost[i-2]);
        
        return cost[cost.size()-1];
    }
};
