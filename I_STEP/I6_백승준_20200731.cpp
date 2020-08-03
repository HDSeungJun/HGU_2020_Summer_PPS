#include <string>
#include <stack>

class Solution
{
public:
    string reverseParentheses(string s)
    {
        stack<int> reverse;
        string result;
        int i;
        int idx1, idx2;
        bool check = false;
        
        while(1)
        {
            if(s.find('(') == string::npos
               && s.find(')') == string::npos)
                check = true;
            
            if(check)
                break;
            
            for(i=0; i<s.size(); i++)
            {
                if(s.at(i) == '(')
                    idx1 = i;
                if(s.at(i) == ')')
                {
                    idx2 = i;
                    break;
                }
            }
            
            for(i=idx1+1; i<idx2; i++)
                reverse.push(s.at(i));
            
            s.at(idx1) = '0';
            s.at(idx2) = '0';
            for(i=idx1+1; i<idx2; i++)
            {
                s.at(i) = reverse.top();
                reverse.pop();
            }
        }
        
        for(i=0; i<s.size(); i++)
            if(s.at(i) != '0')
                result += s.at(i);
        
        return result;
    }
};
