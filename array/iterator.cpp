/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<array>
#include<iterator>

using namespace std;

int main()
{
    array<int,5>n={1,8,9,7,6};
    
    for(auto i=n.begin();i!=n.end();i++)
    {
        cout<<*i<<endl;
    }
    
    return 0;
}
