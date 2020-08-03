#include <string>
#include <stack>

class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        int i;
        
        stack<char> str_S, str_T;
        bool check = true;
        
        for(i=0; i<S.size(); i++)
        {
            if(S.at(i) == '#')
            {
                if(str_S.size() != 0)
                    str_S.pop();
            }
            else
                str_S.push(S.at(i));
        }
        
        for(i=0; i<T.size(); i++)
        {
            if(T.at(i) == '#')
            {
                if(str_T.size() != 0)
                    str_T.pop();
            }
            else
                str_T.push(T.at(i));
        }
        
        if(str_S.size() != str_T.size())
            return false;
        else if(str_S.size() == 0)
            return true;
        
        while(!(str_S.empty() && str_T.empty()))
        {
            if(str_S.top() != str_T.top())
            {
                check = false;
                break;
            }
            str_S.pop();
            str_T.pop();
        }
        
        return check;
    }
};
