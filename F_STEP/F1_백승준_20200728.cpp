#include <string>

class Solution
{
public:
    int romanToInt(string s)
    {
        int num = 0;
        int i;
        
        for(i=0; i<s.size(); i++)
        {
            if(i != s.size()-1)
            {
                if(s.at(i) == 'I')
                {
                    if(s.at(i+1) == 'V')
                    {
                        num += 4;
                        i++;
                    }
                    else if(s.at(i+1) == 'X')
                    {
                        num += 9;
                        i++;
                    }
                    else
                        num++;
                }
                else if(s.at(i) == 'X')
                {
                    if(s.at(i+1) == 'L')
                    {
                        num += 40;
                        i++;
                    }
                    else if(s.at(i+1) == 'C')
                    {
                        num += 90;
                        i++;
                    }
                    else
                        num += 10;
                }
                else if(s.at(i) == 'C')
                {
                    if(s.at(i+1) == 'D')
                    {
                        num += 400;
                        i++;
                    }
                    else if(s.at(i+1) == 'M')
                    {
                        num += 900;
                        i++;
                    }
                    else
                         num += 100;
                }
                else
                {
                    if(s.at(i) == 'V')
                        num += 5;
                    else if(s.at(i) == 'L')
                        num += 50;
                    else if(s.at(i) == 'D')
                        num += 500;
                    else if(s.at(i) == 'M')
                        num += 1000;
                }
            }
            else
            {
                switch(s.at(i))
                {
                    case 'I':
                        num++;
                        break;
                    case 'V':
                        num += 5;
                        break;
                    case 'X':
                        num += 10;
                        break;
                    case 'L':
                        num += 50;
                        break;
                    case 'C':
                        num += 100;
                        break;
                    case 'D':
                        num += 500;
                        break;
                    case 'M':
                        num += 1000;
                        break;
                }
            }
                    
        }
        return num;
    }
};
