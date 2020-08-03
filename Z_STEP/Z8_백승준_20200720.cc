#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int size;
    string* score;
    int* result;
    int count=0;
    int i,j;
    
    cin >> size;
    score = new string[size];
    result = new int[size];
    
    for(i=0; i<size; i++)
        cin >> score[i];
    
    for(i=0; i<size; i++)
    {
        count = 0;
        for(j=0; j<score[i].length(); j++)
        {
            if(score[i].at(j) == 'O')
                count++;
            else
                count = 0;
            result[i] += count;
        }
    }
    
    for(i=0; i<size; i++)
        cout << result[i] << endl;
    
    return 0;
}
