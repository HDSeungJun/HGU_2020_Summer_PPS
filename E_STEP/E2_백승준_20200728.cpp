#include <algorithm>
#include <vector>

class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        int positive_number = 1;
        vector<int> positive;
        int i;
        
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        for(i=0; i<nums.size(); i++)
            if(nums[i] > 0)
                positive.push_back(nums[i]);
        
        for(i=0; i<positive.size(); i++)
        {
            if(positive_number == positive[i])
                positive_number++;
            else
                break;
        }
        
        return positive_number;
    }
};
