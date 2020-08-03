#include <iostream>
using namespace std;

int main(void)
{
    int E, S, M;
    int year = 1;
    cin >> E >> S >> M;
    
    // 1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19
    
    while(1)
    {
        if((year-E) % 15 == 0 && (year-S) % 28 == 0 && (year-M) % 19 == 0)
            break;
        year++;
    }
    
    cout << year << endl;
    
    return 0;
}
