#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    bool answer = true;
    int num = 0;
    int copy = x;
    
    while(1)
    {
        if(x < 10)
        {
            num += x;
            break;
        }
        num += x % 10;
        x = x / 10;
    }
    
    if(copy%num == 0)
        answer = true;
    else
        answer = false;
    
    
    return answer;
}
