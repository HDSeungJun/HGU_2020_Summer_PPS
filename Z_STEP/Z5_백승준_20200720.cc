#include <iostream>
using namespace std;

int main(void)
{
    int remain[10];
    int standard = 42;
    int size = sizeof(remain)/sizeof(int);
    int temp, result;
    int i, j;
    
    for(i=0; i<size; i++)
    {
        cin >> temp;
        remain[i] = temp%standard;
    }
    
    result = 0;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
            if(remain[i] != -1 && remain[i] == remain[j] && i != j)
            {
                remain[j]= -1;
            }
    }
    
    for(i=0; i< size; i++)
        if(remain[i] != -1)
            result++;
    
    cout << result << endl;
    
    return 0;
}
