#include <iostream>
using namespace std;

int main(void)
{
    int A, B, C;
    int count = 0;
    cin >> A >> B >> C;
    
    if(B < C)
        count = A/(C-B)+1;
    else
        count = -1;
    
    cout << count << endl;
    
    return 0;
}
