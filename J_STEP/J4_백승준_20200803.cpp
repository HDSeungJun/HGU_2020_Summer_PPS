#include <string>

class Solution
{
public:
    bool checkRecord(string s)
    {
        int count[2] = {0,};
        int last_idx, present_idx;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s.at(i) == 'A')
            {
                count[0]++;
                last_idx = 0;
            }
            else if(s.at(i) == 'L')
            {
                present_idx = 1;
                
                if(count[1] == 0)
                    count[1]++;
                else
                {
                    if(present_idx == last_idx)
                        count[1]++;
                    else
                        count[1] = 0;
                }
                last_idx = 1;
            }
            else
            {
                last_idx = 0;
                count[1] = 0;
            }
            
            if(count[0] > 1 || count[1] > 2)
                return false;
        }
        return true;
    }
};
