class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int>& A)
    {
        vector<int> result(A.size());
        int odd_idx = 1, even_idx = 0;
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i] % 2 == 0)
            {
                result[even_idx] = A[i];
                even_idx += 2;
            }
            else
            {
                result[odd_idx] = A[i];
                odd_idx += 2;
            }
        }
        return result;
    }
};  
