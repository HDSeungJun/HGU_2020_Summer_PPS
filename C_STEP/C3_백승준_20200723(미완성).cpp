#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int i, j;
    int count = 0;
    int A_count = 0;
    int nA_count = 0;
    int num_of_case;
    cin >> num_of_case;
    
    string* name = new string[num_of_case];
    for(i=0; i<num_of_case; i++)
        cin >> name[i];
    
    for(i=0; i<num_of_case; i++)
    {
        count = (int)name[i].size() - 1;
        for(j=0; j<name[i].size()-1; j++)
        {
            if(name[i].at(j) == 'A')
            {
                if(name[i].at(j+1) == 'A')
                    A_count++;
                else
                    A_count += 1;
            }
            else
            {
                nA_count++;
                A_count = 0;
            }
        }
        if(A_count >= nA_count)
        {
            count -= A_count;
            if(nA_count > 1)
                count += nA_count;
        }
        
        for(j=0; j<name[i].size(); j++)
        {
            if(name[i].at(j) <= 'N')
                count += name[i].at(j) - 'A';
            else
                count += 'Z' - name[i].at(j) + 1;
           // cout << count << endl;
        }
        cout << count << endl;
        count = 0;
        A_count = 0;
        nA_count = 0;
    }
    
    return 0;
}
