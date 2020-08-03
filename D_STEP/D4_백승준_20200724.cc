#include <iostream>
using namespace std;

int main(void)
{
    int count, max;
    int trump[100];
    int max_value = 0, sum;
    int i, j, k;
    
    cin >> count >> max;
    
    for(i=0; i<count; i++)
        cin >> trump[i];
    
    for(i=0; i<count; i++)
        for(j=i+1; j<count; j++)
            for(k=j+1; k<count; k++)
            {
                sum = trump[i]+trump[j]+trump[k];
                if(sum > max_value && sum <= max)
                    max_value = sum;
            }
    
    cout << max_value << endl;
    
    return 0;
}
