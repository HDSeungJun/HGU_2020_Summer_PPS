#include <algorithm>
#include <vector>

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int i, j;
        bool check = false;
        
        i = 0;
        j = nums.size()-1;
        
        while(i <= j)
        {
            if(nums[i] == target)
            {
                check = true;
                break;
            }
            else if(nums[j] == target)
            {
                check = true;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        
        return check;
    }
};
