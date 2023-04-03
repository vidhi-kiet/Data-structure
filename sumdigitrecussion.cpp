/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int getdi(int n)
{
    if(n==0)
      return 0;
    
    return getdi(n/10)+n%10;
}

int main()
{
    int n;
    cout<<"sum of digit :"<<endl;
    cout<<"enter no.:";
    cin>>n;
    cout<<"digit sum is :"<<getdi(n)<<endl;
    

    return 0;
}