#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    int size;
    string initial, temp, result;
    int i;
    int count[26] = {0,};
    bool check = false;
    
    cin >> size;
    for(i=0; i<size; i++)
    {
        cin >> temp;
        initial += temp.front();
    }
    
    for(i=0; i<initial.length(); i++)
        count[initial.at(i)-'a']++;
    
    for(i=0; i<sizeof(count)/sizeof(int); i++)
        if(count[i] >= 5)
        {
            check = true;
            result += (char)(i + 'a');
        }
    
    if(check)
        cout << result << endl;
    else
        cout << "PREDAJA" << endl;
    
    return 0;
}
