#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(string a, string b);

int main(void)
{
    int n;
    int i;
    
    cin >> n;
    
    vector<string> serial(n);
    
    for(i=0; i<n; i++)
        cin >> serial[i];
    
    sort(serial.begin(), serial.end(), comp);
    
    for(i=0; i<n; i++)
        cout << serial[i] << endl;
    
    return 0;
}

bool comp(string a, string b)
{
    if(a.length() != b.length())
        return a.length() < b.length();
    
    int a_sum = 0, b_sum = 0;
    int i;
    
    for(i=0; i<a.length(); i++)
        if(a.at(i) >= '0' && a.at(i) <= '9')
            a_sum += a.at(i) - '0';
    
    for(i=0; i<b.length(); i++)
        if(b.at(i) >= '0' && b.at(i) <= '9')
            b_sum += b.at(i) - '0';
    if(a_sum != b_sum)
        return a_sum < b_sum;
    
    return a<b;
    
}
