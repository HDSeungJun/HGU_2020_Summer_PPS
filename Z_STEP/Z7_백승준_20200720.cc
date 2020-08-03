#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num1, num2;
    int size;
    int* sum;
    int i;
    
    cin >> size;
    sum = new int[size];
    
    for(i=0; i<size; i++)
    {
        cin >> num1 >> num2;
        sum[i] = num1 + num2;
    }
    
    for(i=0; i<size; i++)
        cout << sum[i] << "\n";
    
    delete[] sum;
    
    return 0;
}
