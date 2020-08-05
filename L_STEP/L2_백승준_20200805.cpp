class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i, j;
        int sum;
        bool check = false;
        vector<int> answer;
        
        for(i=0; i<nums.size(); i++)
        {
            for(j=i+1; j<nums.size(); j++)
            {
                sum = nums[i] + nums[j];
                
                if(sum == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
        
        return answer;
    }
};
