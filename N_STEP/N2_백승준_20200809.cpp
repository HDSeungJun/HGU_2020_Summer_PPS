class Solution
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        sort(nums1.begin(),nums1.end());
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        
        int idx1, idx2, j;
        vector<int> results;
        
        idx1 = 0;
        idx2 = 0;
        while(1)
        {
            if(idx1 == nums1.size() || idx2 == nums2.size())
                break;
            
            if(nums1[idx1] == nums2[idx2])
            {
                results.push_back(nums1[idx1]);
                idx1++;
                idx2++;
            }
            else
            {
                if(nums1[idx1] > nums2[idx2])
                    idx2++;
                else
                    idx1++;
            }
        }
        
        return results;
    }
};
