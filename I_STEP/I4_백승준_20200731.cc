#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int num;
    int i;
    
    cin >> num;
    vector<int> nums(num);
    
    for(i=0; i<num; i++)
        cin >> nums[i];
    
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    for(i=0; i<nums.size(); i++)
        cout << nums[i] << " ";
    
    return 0;
}
