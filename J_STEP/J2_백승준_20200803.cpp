#include <cmath>

class Solution
{
public:
    int addDigits(int num)
    {
        int i, result = 0;
        
        if(num < 10)
            return num;
        
        while(1)
        {
            while(1)
            {
                if(num < 10)
                {
                    result += num;
                    break;
                }
                result += num/10;
                num = num % 10;
            }
            
            if(result < 10)
                break;
            else
            {
                num = result;
                result = 0;
            }
        }
        
        return result;
    }
};
