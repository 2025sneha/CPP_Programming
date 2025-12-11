#include<iostream>
using namespace std;

float Summation(float Arr[], int iSize)
{
    float iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    float Brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};
    float fRet = 0.0f;

    fRet = Summation(Brr,5);

    cout<<"Summation is : "<<fRet<<'\n';

    return 0;
    
}
