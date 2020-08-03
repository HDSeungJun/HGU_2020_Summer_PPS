#include <vector>
#include <algorithm>
class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int n2_index = 0;
        
        for(int i=nums1.size()-1; i>=m; i--)
            if(nums1[i] == 0)
                nums1[i] = nums2[n2_index++];
        sort(nums1.begin(), nums1.end());
    }
};
