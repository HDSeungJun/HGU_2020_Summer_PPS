class Solution
{
public:
    string removeDuplicates(string S)
    {
        bool check = false;
        int i;
        string result;
        
        if(S.size() == 0)
            return result;
        
        while(1)
        {
            for(i=0; i<S.size()-1; i++)
                if(S.at(i) == S.at(i+1))
                    check = true;
            
            if(!check)
                break;
            result = "";
            
            for(i=0; i<S.size()-1; i++)
            {
                if(S.at(i) == S.at(i+1))
                {
                    S.at(i) = '0';
                    S.at(i+1) = '0';
                }
                else
                {
                    if(S.at(i) != '0')
                        result += S.at(i);
                }
            }

            if(S.at(S.size()-1) != S.at(S.size()-2))
                result += S.at(S.size()-1);
            
            if(result.size() == 0)
                break;
            
            S = result;
            check = false;
        }
        
        return result;
    }
};
