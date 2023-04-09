/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void toh(int n,char a,char b,char c)
{
    if(n==1)
    {
        cout<<"move disk "<<n<<" from rod "<<a<<" to "<<c<<" using "<<b<<endl;
        return;
    }
    toh(n-1,a,c,b);
    cout<<"move disk "<<n<<" from rod "<<a<<" to "<<c<<" using "<<b<<endl;;
    toh(n-1,b,a,c);

}

int main()
{
    int n=3;
    toh(n,'a','b','c');

    return 0;
}