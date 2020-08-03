#include <string>
#include <vector>
#include <algorithm>

bool comp(string a, string b);

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string common;
        
        if(strs.size() == 0)
            return common;
        else if(strs.size() == 1)
        {
            common = strs[0];
            return common;
        }
        
        int i, j;
        bool check;
        
        sort(strs.begin(), strs.end(), comp);
        
        for(i=0; i<strs[0].size(); i++)
        {
            for(j=0; j<strs.size()-1; j++)
            {
                if(strs[j].at(i) == strs[j+1].at(i))
                    check = true;
                else
                {
                    check = false;
                    break;
                }
            }
            if(check)
                common += strs[j].at(i);
            else
                break;
        }
        
        return common;
        
    }
};

 bool comp(string a, string b)
    {
        if(a.size() != b.size())
            return a.size() < b.size();
        else
            return a<b;
    }
