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
};

void display(struct Array objArray)
{
    cout << "Elements in Array are: " << endl;

    for(int i = 0; i < objArray.iLength; ++i)
    {
        cout << objArray.A[i] << " " << endl;
    }
}

int main()
{
    Array objArr = {{2, 4, 6, 7, 8}, 5};

    display(objArr);

    return 0;
}
