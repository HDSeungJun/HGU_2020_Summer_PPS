#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int i;
    int carry, sum;
    string num1, num2, result;
    int n1_digit, n2_digit;
    cin >> num1 >> num2;
    
    //자릿수 맞추기
    string temp;
    if (num1.size() > num2.size())
        {
            for (int i = 0; i < num1.size() - num2.size(); i++)
                temp += '0';
            num2 = temp + num2;
        }
        else
        {
            for (int i = 0; i < num2.size() - num1.size(); i++)
                temp += '0';
            num1 = temp + num1;
        }
    
    //cout << num1 << " " << num2;
    
    carry = 0;
    for(i=(int)num1.size()-1; i>=0; i--)
    {
        n1_digit = num1.at(i) - '0';
        n2_digit = num2.at(i) - '0';
        sum = (carry+n1_digit+n2_digit)%10;
        carry = (carry+n1_digit+n2_digit)/10;
        
        result = (char)(sum+'0') + result;
    }
    
    if(carry > 0)
        result = (char)(carry+'0') + result;

    cout << result << endl;
    
    return 0;
}
