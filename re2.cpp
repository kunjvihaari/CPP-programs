#include <iostream>
using namespace std;

void f(int c, int r)
{
    if (r == 0)
        return;

    if (c < r)
    {
        cout << "*";

        f(c, r - 1);
    }
    else
        cout << endl;

    f(c + 1, r);
}

int main()
{
    f(0, 4);
    return 0;
}