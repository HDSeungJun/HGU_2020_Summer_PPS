#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int i, j;
    int carry, sum;
    int count;
    string num1, num2, result;
    bool check = false;
    string range1, range2;
    int n1_digit, n2_digit;
    cin >> range1 >> range2;
    num1 = '1';
    num2 = '1';
    
    //자릿수 맞추기
    string temp;
    count = 0;
    
    for(j=0; ; j++)
    {
        temp = "";
        result = "";
        if (num1.size() > num2.size())
        {
            for (int i = 0; i < num1.size() - num2.size(); i++)
                temp += '0';
            num2 = temp + num2;
        }
        else if (num1.size() < num2.size())
        {
            for (int i = 0; i < num2.size() - num1.size(); i++)
                temp += '0';
            num1 = temp + num1;
        }
        else { }
        
        //cout << num1 << " " << num2 << endl;
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
        
        temp = num2;
        num2 = result;
        num1 = temp;
        
        //피보나치 수열 수가 범위 안에 들어가는지 확인하는 알고리즘
        if(result.size() > range1.size() && result.size() < range2.size())
            count++;
        else if(result.size() == range1.size())
            for(int i=0; i<result.size(); i++)
            {
                if(result.at(i) - '0' > range1.at(i) - '0')
                {
                    count++;
                    break;
                }
                else if(result.at(i) - '0' < range1.at(i) - '0')
                    break;
            }
        else if(result.size() == range2.size())
        {
             for(int i=0; i<result.size(); i++)
             {
                 if(result.at(i) - '0' > range2.at(i) - '0')
                 {
                     check = true;
                     break;
                 }
                 else if(result.at(i) - '0' < range2.at(i) - '0')
                 {
                     count++;
                     break;
                 }
             }
        }
        
        if(check)
            break;
        
        cout << result << endl;
            
    }
    
    cout << count << endl;
        
    return 0;
}
