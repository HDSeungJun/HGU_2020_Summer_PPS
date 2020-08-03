#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int row, column;
    string* blind;
    int status[5]={0,};
    int i, j;
    int b_count = 0;
    
    cin >> column >> row;
    blind = new string[5*column+1];
    
    for(i=0; i<5*column+1; i++)
        cin >> blind[i];
    
    for (i=0; i<row; i++)
    {
        for (j=1; j<5*column+1; j++)
        {
            //창문인 부분, 한 줄의 앞글자만 *인지 아닌지 확인했습니다.
            if (blind[j][i*5+1] == '*')
                b_count++;
            
            //5줄을 다 확인하면 status에 저장하는 방식
            if (j%5 == 0) {
                status[b_count]++;
                b_count = 0;
                continue;
            }
        }
    }
    
    for(i=0; i<5; i++)
        cout << status[i] << " ";
        
    return 0;
}
