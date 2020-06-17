#include <iostream>

using namespace std;

int main()
{
    /*
     * No need to append '\0' as this is
     * added by Compiler automatically as we use "".
     */
    char *s = "welcome";

    int iLength = 0;

    while (s[iLength] != '\0')
    {
        ++iLength;
    }

    cout << "The Length of the string is: " << iLength << endl;
    return 0;
}
