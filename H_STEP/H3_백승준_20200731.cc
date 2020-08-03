#include <iostream>
using namespace std;

int main(void)
{
    int num;
    int** body;
    int i, j, ranking = 1;
    
    cin >> num;
    body = new int*[num];
    for(i=0; i<num; i++)
        body[i] = new int[2];
    
    for(i=0; i<num; i++)
        cin >> body[i][0] >> body[i][1];
    
    for(i=0; i<num; i++)
    {
        ranking = 1;
        for(j=0; j<num; j++)
        {
            if(body[i][0] < body[j][0] && body[i][1] < body[j][1])
                ranking++;
        }
        
        cout << ranking << " ";
    }
    
    
    
    return 0;
}
