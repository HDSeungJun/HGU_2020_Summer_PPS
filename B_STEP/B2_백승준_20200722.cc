#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int num_of_case;
    string* origin;
    string* answer;
    
    cin >> num_of_case;
    origin = new string[num_of_case];
    answer = new string[num_of_case];
    
    for(int i=0; i<num_of_case; i++)
        cin >> origin[i];
    
    for(int i=0; i<num_of_case; i++)
        for(int j=0; j<origin[i].size(); j++)
        {
            if(origin[i].at(j) < 'Z')
                answer[i] += (origin[i].at(j) + 1);
            else
                answer[i] += 'A';
        }
    
    for(int i=0; i<num_of_case; i++)
    {
        cout << "String #" << i+1 << endl;
        cout << answer[i] << "\n" << endl;
    }
        
    return 0;
}
