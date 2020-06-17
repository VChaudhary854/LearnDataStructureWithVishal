#include <iostream>

using namespace std;

/**
 * @brief The Array struct: Structure Which Contains array of size 10 and arrays
 * Length (number of items it contains.)
 */
struct Array
{
    int A[10];
    int iLength;
    int iSize;
};

void insertSort(struct Array &objArray, int iElement)
{
    int i = objArray.iLength - 1;

    /*
     *  If this condition is true, means array is full
     *  No other element can be inserted.
     */
    if (objArray.iLength == objArray.iSize)
        return;

    while ((objArray.A[i] > iElement) && (i >= 0))
    {
        objArray.A[i+1] = objArray.A[i];
        --i;
    }

    objArray.A[i+1] = iElement;
    objArray.iLength++;
}

void display(struct Array objArray)
{
    cout << "Elements in Array are: " << endl;

    for(int i = 0; i < objArray.iLength; ++i)
    {
        cout << objArray.A[i] << " " << endl;
    }
}

//int main()
//{
//    Array objArr = {{2, 4, 6, 7, 8}, 5, 10};

//    insertSort(objArr, 5);

//    display(objArr);

//    return 0;
//}

int main()
{
    Rectangle objRect(15, 10);

    int iArea = objRect.area();

    cout << "The Area of Rectangle is: " << iArea << endl;

    return 0;
}
