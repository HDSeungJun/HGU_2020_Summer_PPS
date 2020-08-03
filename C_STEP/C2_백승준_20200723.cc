#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int seven25[2];
    int num;
    int** cvs;
    double* result;
    int i, j;
    
    cin >> seven25[0] >> seven25[1];
    cin >> num;
    num++;
    cvs = new int*[num];
    result = new double[num];
    
    for(i=0; i<num; i++)
        cvs[i] = new int[2];
    
    cvs[0][0] = seven25[0];
    cvs[0][1] = seven25[1];
    for(i=1; i<num; i++)
        for(j=0; j<2; j++)
            cin >> cvs[i][j];
    
    for(i=0; i<num; i++)
        result[i] = 1000*cvs[i][0]/(double)cvs[i][1];
    
    sort(result, result+num);
    
    printf("%.2f\n", result[0]);
    
    return 0;
}
