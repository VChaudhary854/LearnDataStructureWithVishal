#include <iostream>

using namespace std;

class Rectangle
{
    int iHeight;
    int iWidth;

public:
    Rectangle()
    {

    }

    Rectangle(int height, int width) : iHeight(height), iWidth(width)
    {

    }

    int area()
    {
        int iArea;

        iArea = iHeight * iWidth;

        return iArea;
    }
};


int main()
{
    Rectangle objRect(15, 10);

    int iArea = objRect.area();

    cout << "The Area of Rectangle is: " << iArea << endl;

    return 0;
}
