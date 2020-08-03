#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void)
{
    int i, count = 0, k_count = 0;
    int check = 0;
    vector<int> num;
    vector<int> result;
    int n, k;
    cin >> n >> k;
    
    if(n == 0 && k == 0)
    {
        cout << "<0>" << endl;
        return 0;
    }
    
    for(i=0; i<n; i++)
        num.push_back(i+1);
    
    while(count != n)
    {
        for(i=0; i<num.size(); i++)
            check += num[i];
        
        if(check == 0)
            break;
        
        for(i=0; i<num.size(); i++)
        {
            if(num[i] != 0)
                k_count++;
            
            if(k_count == k)
            {
                result.push_back(num[i]);
                num[i] = 0;
                k_count = 0;
                count++;
            }
        }
    }
    
    cout << '<';
    for(i=0; i<result.size()-1; i++)
        cout << result[i] << ", ";
    cout << result[result.size()-1] << '>' << endl;
    
    return 0;
}
