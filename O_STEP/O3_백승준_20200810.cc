#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool comp(char a, char b);

int main(void)
{
    string s;
    
    cin >> s;
    
    sort(s.begin(), s.end(), comp);
    
    cout << s << endl;
    
    return 0;
}
bool comp(char a, char b)
{
    return a>b;
}
