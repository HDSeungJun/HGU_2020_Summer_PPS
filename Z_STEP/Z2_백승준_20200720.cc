#include <iostream>
using namespace std;

int main(void)
{
    int cook[5][4];
    int result[5] = {0,};
    int maxIndex = 0;
    int i, j;
    
    for(i=0; i<5; i++)
        for(j=0; j<4; j++)
        {
            cin >> cook[i][j];
            result[i] += cook[i][j];
        }
    
    for(i=1; i<5; i++)
    {
        if(result[maxIndex]<result[i])
            maxIndex = i;
    }
    
    cout << maxIndex+1 << " " << result[maxIndex] << endl;
        
    return 0;
}
