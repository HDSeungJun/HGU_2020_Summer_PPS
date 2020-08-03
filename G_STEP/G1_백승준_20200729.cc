#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    string str;
    int i, time = 0;
    char digit;
    
    cin >> str;
    
    for(i=0; i<str.size(); i++)
    {
        digit = str.at(i);
        
        if(digit >= 'A' && digit <= 'C')
            time += 3;
        else if(digit >= 'D' && digit <= 'F')
            time += 4;
        else if(digit >= 'G' && digit <= 'I')
            time += 5;
        else if(digit >= 'J' && digit <= 'L')
            time += 6;
        else if(digit >= 'M' && digit <= 'O')
            time += 7;
        else if(digit >= 'P' && digit <= 'S')
            time += 8;
        else if(digit >= 'T' && digit <= 'V')
            time += 9;
        else
            time += 10;
    }
    
    cout << time << endl;
    
    return 0;
}
