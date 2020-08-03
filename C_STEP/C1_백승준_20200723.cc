#include <iostream>
using namespace std;

void combination(int arr[], int index, int n, int r, int target, int* data);
void check_arr(int arr[], int length, int* data);

int main(void)
{
    int num_of_case[9];
    int data[9];
    
    for(int i=0; i<9; i++)
        cin >> data[i];
    
    combination(num_of_case, 0, 9, 7, 0, data);
    
    return 0;
}

void combination(int arr[], int index, int n, int r, int target, int* data)
{
    if(r == 0)
        check_arr(arr, index, data);
    else if(target == n)
        return;
    else
    {
        arr[index] = target;
        combination(arr, index+1, n, r-1, target+1, data);
        combination(arr, index, n, r, target+1, data);
    }
}

void check_arr(int arr[], int length, int* data)
{
    int sum = 0;
    
    for(int i=0; i<length; i++)
        sum += data[arr[i]];
    
    if(sum == 100)
        for(int i=0; i<length; i++)
            cout << data[arr[i]] << endl;
}
