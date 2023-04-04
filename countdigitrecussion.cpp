/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int countdigit(int n)
{
    if(n/10==0)
    {
        return 1;
    }
    return 1+countdigit(n/10);
}

int main()
{
    cout<<"enter no.:";
    int n;
    cin>>n;
    cout<<"no. of digit are :"<<countdigit(n);

    return 0;
}