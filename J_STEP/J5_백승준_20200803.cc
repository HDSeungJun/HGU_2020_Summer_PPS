#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    queue<int> card;
    int i, result;
    int N;
    cin >> N;
    
    for(i=0; i<N; i++)
        card.push(i+1);
    
    i = 1;
    while(card.size() != 1)
    {
        if(i%2 == 1)
            card.pop();
        
        card.push(card.front());
        card.pop();
    }
    
    result = card.front();
    cout << result << endl;
    
    return 0;
}
