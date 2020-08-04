#include <string>
#include <vector>

using namespace std;

int solution(int num)
{
    int answer = 0;
    
    while(num != 1)
    {
        if(answer >= 450)
        {
            answer = -1;
            break;
        }
        if(num % 2 == 0)
            num /= 2;
        else
        {
            num *=3;
            num++;
        }
        answer++;
    }
    
    return answer;
}
