/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<array>

using namespace std;

void printarray(const array<int,5> &n)
{
    cout<<"length :"<<n.size()<<endl;
    for(int i;i<n.size();i++)
    {
        cout<<"Element ["<<i<<"] :"<<n[i]<<endl;
        
    }
}

int main()
{
    array<int,5> n={1,5,8,4,7};
    printarray(n);
    

    return 0;
}