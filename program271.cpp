#include<iostream>
using namespace std;

template<class T>
T Summation(T Arr[], int iSize)
{
    T iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    float fRet = 0.0f;

    fRet = Summation(Brr,5);

    cout<<"Summation is : "<<fRet<<'\n';

    return 0;
    
}
