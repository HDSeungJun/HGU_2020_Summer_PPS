#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int sum;
    int i, j, k;
    int count = 2;
    bool check = false;
    
    for(i=0; i<nums.size(); i++)
        for(j=i+1; j<nums.size(); j++)
            for(k=j+1; k<nums.size(); k++)
            {
                sum = nums[i] + nums[j] + nums[k];
                
                if(sum == 1)
                    answer++;
                else
                {
                    while(count < sum)
                    {
                        if(sum%count == 0)
                        {
                            check = true;
                            break;
                        }
                        else
                            count++;
                    }
                    if(!check)
                        answer++;
                }
                check = false;
                count = 2;
            }

    return answer;
}
