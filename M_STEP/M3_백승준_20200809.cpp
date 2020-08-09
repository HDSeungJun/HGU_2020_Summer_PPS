class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i, idx;
        int check = 0;
        
        if(s.size() == 0 && t.size() == 0)
            return true;
        if(s.size() == 0 && t.size() != 0)
            return true;
        if(s.size() != 0 && t.size() == 0)
            return false;
        
        for(i=0, idx=0; i<t.size(); i++)
        {
            if(t.at(i) == s.at(idx))
            {
                idx++;
                check++;
            }
            if(idx == s.size())
                break;
        }
        
        return (check == s.size());
    }
};
