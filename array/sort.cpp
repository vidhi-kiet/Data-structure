/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<array>
#include<iterator>
#include <algorithm>//for sort


using namespace std;

int main()
{
    array<int,5>n={1,8,9,7,6};
    cout<<"before sort :";
    for(auto i=n.begin();i!=n.end();i++)
    {
        cout<<*i<<" ";
    }
        sort(n.begin(),n.end());
         cout<<"\nafter sort :";
    for(auto i=n.begin();i!=n.end();i++)
    {
        cout<<*i<<" ";
    }
    

    
    return 0;
}
