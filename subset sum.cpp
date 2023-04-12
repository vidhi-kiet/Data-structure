/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int countset(int n,int a[],int sum)
{
    if(n==0)
    {
        if(sum==0)
        return 1;
        else
        return 0;
    }
    return countset(n-1,a,sum)+countset(n-1,a,sum-a[n-1]);
}

int main()
{
    int n=3;
    int a[]={10,15,20};
    int sum=25;
    cout<<countset(n,a,sum);

    return 0;
}