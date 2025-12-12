#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[], int iSize)
{
    T iMax;
    int iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    float fRet = 0.0f;

    fRet = Maximum(Brr,5);

    cout<<"Maximum is : "<<fRet<<'\n';

    return 0;
    
}
