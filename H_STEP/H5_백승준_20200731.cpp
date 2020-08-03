class Solution
{
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        int i, j;
        bool check = false;
        vector<int> result;
        
        for(i=0; i<nums.size(); i++)
        {
            for(j=i+1; j<nums.size(); j++)
            {
                if(nums[i] < nums[j])
                {
                    check = true;
                    result.push_back(nums[j]);
                    break;
                }
            }
            
            if(!check)
            {
                for(j=0; j<i; j++)
                {
                    if(nums[i] < nums[j])
                    {
                        check = true;
                        result.push_back(nums[j]);
                        break;
                    }
                }
            }
            
            if(!check)
                result.push_back(-1);
            check = false;
        }
        
        return result;
    }
};
