class Solution
{
public:
    int rob(vector<int>& nums)
    {
       if(nums.size() == 0)
           return 0;
        
        int house[nums.size()+1];
        house[0] =0;
        house[1] = nums[0];
        
        for(int i=1; i<nums.size(); i++)
            house[i+1] = max(house[i], house[i-1] + nums[i]);

        return house[nums.size()];
    }
};
