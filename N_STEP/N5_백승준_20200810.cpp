class Solution
{
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        vector<int> result;
        vector<int> check(arr1.size(),0);
        vector<int> temp;
        int i, j;
        
        for(i=0; i<arr2.size(); i++)
        {
            for(j=0; j<arr1.size(); j++)
            {
                if(arr1[j] == arr2[i])
                {
                    result.push_back(arr1[j]);
                    check[j]++;
                }
            }
        }
        for(i=0; i<check.size(); i++)
            if(check[i] == 0)
                temp.push_back(arr1[i]);
        sort(temp.begin(), temp.end());
        for(i=0; i<temp.size(); i++)
            result.push_back(temp[i]);
        
        return result;
    }
};
