#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<vector<int>> position;
    vector<int> temp(2);
    int num, i;
    
    cin >> num;
    
    for(i=0; i<num; i++)
    {
        cin >> temp[0] >> temp[1];
        position.push_back(temp);
    }
    
    sort(position.begin(), position.end());
    
    for(i=0; i<position.size(); i++)
        cout << position[i][0] << " " << position[i][1] << '\n';
    
    return 0;
}

