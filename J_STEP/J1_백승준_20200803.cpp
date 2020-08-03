#include <cmath>

class Solution
{
public:
    bool isPowerOfFour(int num)
    {
        bool check = false;
        int result;
        
        if(num == 1)
            return true;
        if(num <= 0)
            return false;
        
        while(num != 1)
        {
            result = num % 4;
            if(result != 0)
            {
                check = true;
                break;
            }
            
            num /= 4;
        }
        return !check;
    }
};
