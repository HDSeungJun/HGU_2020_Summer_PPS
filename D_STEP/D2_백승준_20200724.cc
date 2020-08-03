#include <iostream>
using namespace std;

int main(void)
{
    int T;
    int** H_W_N;
    int i, j;
    int floor, count;
    
    cin >> T;
    H_W_N = new int*[T];
    for(i=0; i<T; i++)
        H_W_N[i] = new int[3];
    
    for(i=0; i<T; i++)
        for(j=0; j<3; j++)
            cin >> H_W_N[i][j];
    
    for(i=0; i<T; i++)
    {
        floor = H_W_N[i][2]%H_W_N[i][0];
        count = H_W_N[i][2]/H_W_N[i][0];
        
        if(floor == 0)
            floor = H_W_N[i][0];
        else
            count++;
        
        printf("%d%02d\n", floor, count);
    }
   
    
    return 0;
}
