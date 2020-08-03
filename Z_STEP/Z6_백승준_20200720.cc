#include <iostream>
using namespace std;

int main(void)
{
    int size;
    int* data;
    int* result;
    int rCount = 0, maxValue = 0;
    int first = 0, last = 0;
    int i;
    
    cin >> size;
    data = new int[size];
    result = new int[size] {0, };
    
    for(i=0; i<size; i++)
        cin >> data[i];
    
    first = data[0];
    last = data[0];
    for(i=0; i<size-1; i++)
    {
        if(data[i] < data[i+1])
            last = data[i+1];
        else
        {
            result[rCount++] = last-first;
            first = data[i+1];
            last = data[i+1];
        }
        
        if(i+1 == size-1)
            result[rCount++] = last-first;
    }
    
    for(i=0; i<size; i++)
        if(maxValue < result[i])
            maxValue = result[i];
    
    cout << maxValue << endl;
    
    delete[] data;
    delete[] result;
    
    return 0;
}
