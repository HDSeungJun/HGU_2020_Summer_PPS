#include <iostream>
#include <string>
using namespace std;

#define MAX_LEN 1000

int main(void)
{
    string pswd[MAX_LEN];
    int len, i, j;
    int c_count = 0, v_count = 0;
    
    for(i=0; i<MAX_LEN; i++)
    {
        cin >> pswd[i];
        if(pswd[i] == "end")
            break;
    }
    
    len = i;
    bool* check = new bool[len];
    for(i=0; i<len; i++)
        check[i] = true;
   
    for(i=0; i<len; i++)
    {
        if(pswd[i].find('a') == string::npos && pswd[i].find('e') == string::npos &&
        pswd[i].find('i') == string::npos && pswd[i].find('o') == string::npos &&
        pswd[i].find('u') == string::npos)
        {
            check[i] = false;
        }
        c_count=0;
        v_count=0;
        
        for(j=0; j<pswd[i].length(); j++)
        {
            if(pswd[i].at(j) == 'a' || pswd[i].at(j) == 'e' || pswd[i].at(j) == 'i' ||
               pswd[i].at(j) == 'o' || pswd[i].at(j) == 'u')
            {
                c_count++;
                v_count = 0;
            }
            else
            {
                c_count = 0;
                v_count++;
            }
            
            if(c_count >= 3 || v_count >= 3)
            {
                check[i] = false;
            }
            
            if(j < pswd[i].length()-1)
            {
                if(pswd[i].at(j) != 'e' && pswd[i].at(j) != 'o')
                    if(pswd[i].at(j) == pswd[i].at(j+1))
                    {
                        check[i] = false;                    }
            }
        }
    }
    
    for(i=0; i<len; i++)
    {
        cout << "<" << pswd[i] << "> is ";
        if(check[i] == true)
            cout << "acceptable";
        else
            cout << "not acceptable";
        cout << "." << endl;
    }
    
    return 0;
}
