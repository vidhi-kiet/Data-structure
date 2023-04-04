/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int rope(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<=-1)
    {
        return -1;
    }
     int res=max(rope(n-a,a,b,c),max(rope(n-b,a,b,c),rope(n-c,a,b,c)));
     
     if(res==-1)
     {
         return -1;
     }
     
     return res+1;
}

int main()
{
    cout<<"enter rope parts :";
    int n=5,a=2,b=1,c=3;
    cout<<"value is :"<<rope(n,a,b,c);

    return 0;
}