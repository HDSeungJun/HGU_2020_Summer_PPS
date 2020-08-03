#include <algorithm>
#include <vector>

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int i, j;
        int check = 0;
        
        i = 0;
        j = nums.size()-1;
        
        while(i <= j)
        {
            if(nums[i] == target)
            {
                check = -1;
                break;
            }
            else if(nums[j] == target)
            {
                check = 1;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        
        if(check == 0 )
            return -1;
        else if(check == -1)
            return i;
        else
            return j;
    }
};
