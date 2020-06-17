#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief The Array struct: Structure Which Contains array of size 10 and arrays
 * Length (number of items it contains.)
 */
struct Array
{
    int A[10];
    int iLength;
};

int binarySearchUsingLoop(struct Array objArr, int iKey)
{
    int iHigh = objArr.iLength - 1;
    int iLow = 0;
    int iMid = 0;
    int iReturnIndex = -1;

    while (iHigh >= iLow)
    {
       iMid = floor( ( ( iHigh + iLow ) / 2 ) );

       if (objArr.A[iMid] == iKey)
       {
           iReturnIndex = iMid;
           break;
       }
       else if (iKey < objArr.A[iMid])
       {
            iHigh = iMid - 1;
       }
       else
       {
           iLow = iMid + 1;
       }
    }

    return iReturnIndex;
}

int binarySearchUsingRecursion(struct Array objArr, int iKey, int iLow, int iHigh)
{
    int iMid = 0;
    int iReturnIndex = -1;

    while (iHigh >= iLow)
    {
       iMid = floor( ( ( iHigh + iLow ) / 2 ) );

       if (objArr.A[iMid] == iKey)
       {
           iReturnIndex = iMid;
           break;
       }
       else if (iKey < objArr.A[iMid])
       {
            return binarySearchUsingRecursion(objArr, iKey, iLow, (iMid - 1));
       }
       else
       {
            return binarySearchUsingRecursion(objArr, iKey, (iMid + 1), iHigh);
       }
    }

    return iReturnIndex;
}

int main()
{
    Array objArr = {{2, 4, 6, 7, 8}, 5};

    //int iIndex = binarySearchUsingLoop(objArr, 7);

    int iIndex = binarySearchUsingRecursion(objArr, 9, 0, (objArr.iLength - 1));

    if (iIndex != -1)
        cout << "Element found at index: " << iIndex << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}
