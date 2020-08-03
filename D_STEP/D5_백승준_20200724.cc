#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int comp(string str1, string str2);

int main(void)
{
    int num;
    
    cin >> num;
    vector<string> str(num);
    
    for(int i=0; i<num; i++)
        cin >> str[i];
    
    sort(str.begin(), str.end(), comp);
    str.erase(unique(str.begin(), str.end()), str.end());
    
    for(int i=0; i<str.size(); i++)
        cout << str[i] << endl;
    
    return 0;
}

int comp(string str1, string str2)
{
    if(str1.size() != str2.size())
        return str1.size() < str2.size();
    return str1 < str2;
}
