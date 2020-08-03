#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str[14] =  {"baby", "sukhwan", "tururu", "turu",
                        "very", "cute", "tururu", "turu",
                        "in", "bed", "tururu", "turu",
                        "baby", "sukhwan"};
    string result;
    int N, k, i;
    
    cin >> N;
    result = str[N % 14 - 1];
    
    if(N % 14 == 0)
    {
        cout << "sukhwan" << endl;
        return 0;
    }
    
    
    k = N / 14;
    if(result == "tururu")
    {
        if(k >= 3)
            cout << "tu+ru*" << k+2 << endl;
        else
        {
            cout << result;
            for(i=0; i<k; i++)
                cout << "ru";
        }
    }
    else if(result == "turu")
    {
        if(k >= 4)
            cout << "tu+ru*" << k+1 << endl;
        else
        {
            cout << result;
            for(i=0; i<k; i++)
                cout << "ru";
        }
    }
    else
        cout << result << endl;

    return 0;
}
