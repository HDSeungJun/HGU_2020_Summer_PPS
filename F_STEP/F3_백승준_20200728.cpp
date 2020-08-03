class Solution
{
public:
    string addBinary(string a, string b)
    {
        char carry, a_digit, b_digit;
        char sum;
        string result;
        string temp;
        int i;
        
        if(a.size() > b.size())
        {
            for(i=0; i<a.size()-b.size(); i++)
                temp += '0';
            b = temp + b;
        }
        else
        {
            for(i=0; i<b.size()-a.size(); i++)
                temp += '0';
            a = temp + a;
        }
        
        carry = '0';
        while(a.size() != 0 || b.size() != 0)
        {
            a_digit = a.back();
            b_digit = b.back();
            
            if(a_digit == '1' && b_digit == '1')
            {
                if(carry == '1')
                {
                    sum = '1';
                    carry = '1';
                }
                else
                {
                    sum = '0';
                    carry = '1';
                }
            }
            else if(a_digit == '1' || b_digit == '1')
            {
                if(carry == '1')
                {
                    sum = '0';
                    carry = '1';
                }
                else
                {
                    sum = '1';
                    carry = '0';
                }
            }
            else
            {
                if(carry == '1')
                    sum = '1';
                else
                    sum = '0';
                carry = '0';
            }
            
            result = sum + result;
            
            a.pop_back();
            b.pop_back();
        }
        
        if(carry == '1')
            result = carry + result;
        
        return result;
    }
};
