#include <vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int i, j, length;
        int area = 0;
        int max_area = 0;
        
        i = 0;
        j = (int)height.size() - 1;
        while(i < j)
        {
            length = j-i;
            if(height[i] > height[j])
                area = height[j] * length;
            else
                area = height[i] * length;
            
            if(max_area < area)
                max_area = area;
            
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        
        return max_area;
    }
};
