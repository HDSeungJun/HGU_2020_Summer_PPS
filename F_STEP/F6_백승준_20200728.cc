#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string c_alphabet;
    int count = 0;
    
    cin >> c_alphabet;
    
    for(int i=0; i<c_alphabet.size(); i++)
    {
        count++;
        
        if((c_alphabet.at(i) == '=' || c_alphabet.at(i) == '-') && i != 0)
        {
            if(i != 1 && (c_alphabet.at(i-1) == 'z' && c_alphabet.at(i-2) == 'd'))
            {
                count -= 2;
            }
            else
                count -= 1;
        }
        if(c_alphabet.at(i) == 'j' && i != 0)
        {
            if(c_alphabet.at(i-1) == 'l' || c_alphabet.at(i-1) == 'n')
            {
                count--;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
