class Solution
{
public:
    int maxSubArray(vector<int>& nums)
    {
        int i, k = 1;
        vector<int> max_value(nums);
        vector<int> results(nums);
        int sum;
        
        while(k < nums.size())
        {
            for(i=0; i<nums.size()-k; i++)
            {
                sum = results[i] + nums[i+k];
                results[i] = sum;
              
                if(max_value[i] < sum)
                    max_value[i] = sum;
            }
            k++;
        }
        sort(max_value.begin(), max_value.end());
        return max_value[max_value.size()-1];
    }
};
