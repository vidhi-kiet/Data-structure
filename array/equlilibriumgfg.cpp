/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a[] = {3, 4, 8, -9, 9, 7};
    int n = 6;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res + a[i];
    }
    int les = 0;
    bool found = false; // Flag variable to track if a subarray with equal sums is found

    for (int i = 0; i < n; i++)
    {
        res = res - a[i];
        if (res == les)
        {
            found = true;
            break;
        }
        les = les + a[i];
    }

    if (found)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
