#include <vector>

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        if(nums.size() == 0)
            return nums;
        
        int i;
        vector<int> standard(nums.size(), 0);
        vector<int> result;
        
        for(i=0; i<nums.size(); i++)
            standard[nums.at(i)-1] += 1;
        
        for(i=0; i<standard.size(); i++)
            if(standard[i] == 0)
                result.push_back(i+1);
                
        return result;
    }
};
