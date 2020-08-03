#include <iostream>
using namespace std;

int main(void)
{
    int scale[8];
    int size = sizeof(scale)/sizeof(int);
    int i;
    bool check = true;
    
    for(i=0; i<size; i++)
        cin >> scale[i];
    
    for(i=0; i<size-1; i++)
    {
        if((scale[i]+1) == scale[i+1])
            check = true;
        else if((scale[i]-1 == scale[i+1]))
            check = true;
        else
        {
            check = false;
            break;
        }
    }
    
    if(check == false)
        cout << "mixed" << endl;
    else
    {
        if(scale[0] > scale[7])
            cout << "descending" << endl;
        else
            cout << "ascending" << endl;
            
    }
        
    return 0;
}
