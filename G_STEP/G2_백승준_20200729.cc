#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    string str;
    vector<int> alphabet(26,0);
    int i, maxIdx = 0;
    bool check = false;
    
    cin >> str;
    
    for(i=0; i<str.size(); i++)
    {
        if(str.at(i) >= 'a' && str.at(i) <= 'z')
            alphabet[str.at(i)-'a']++;
        else
            alphabet[str.at(i)-'A']++;
    }
    
    for(i=0; i<alphabet.size(); i++)
        if(alphabet[maxIdx] < alphabet[i])
            maxIdx = i;
    
    for(i=0; i<alphabet.size(); i++)
        if(alphabet[maxIdx] == alphabet[i] && maxIdx != i)
        {
            check = true;
            break;
        }
    
    if(check)
        cout << "?" << endl;
    else
        cout << (char)(maxIdx+'A') << endl;
    
    return 0;
}
