#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int num_of_case;
    vector<int> alphabet(26,0);
    int i, j, last_idx = 0, count = 0;
    bool check = false;
    
    cin >> num_of_case;
    
    vector<string> str(num_of_case);
    for(i=0; i<str.size(); i++)
        cin >> str[i];
    
    for(i=0; i<str.size(); i++)
    {
        if(str[i].size() == 1)
            count++;
        else
        {
            for(j=0; j<str[i].size(); j++)
            {
                if(alphabet[str[i].at(j)-'a'] == 0 || str[i].at(j)-'a' == last_idx)
                    alphabet[str[i].at(j)-'a']++;
                else
                {
                    check = true;
                    break;
                }
                
                last_idx = str[i].at(j)-'a';
            }
            
            if(!check)
                count++;
            for(j=0; j<alphabet.size(); j++)
                alphabet[j] = 0;
            check = false;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
