#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    string answer = "";
    int month[12] = {0,31,29,31,30,31,30,31,31,30,31,30};
    string date[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

    for(int i = 0; i < a; i++)
        b += month[i];
    b += 4;
    answer= date[b%7];
    
    return answer;
}
