class Solution
{
public:
    vector<int> nextGreaterElement
        (vector<int>& nums1, vector<int>& nums2)
    {
        int i, j, idx;
        vector<int> result;
        bool check = false;
        
        for(i=0; i<nums1.size(); i++)
        {
            for(j=0; j<nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                    idx = j;
            }
            
            for(j=idx; j<nums2.size(); j++)
            {
                if(nums1[i] < nums2[j])
                {
                    result.push_back(nums2[j]);
                    check = true;
                    break;
                }
            }
            
            if(!check)
                result.push_back(-1);
            check = false;
        }
        
        return result;
    }
};
