/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int,5>n;
    
     for(int i;i<n.size();i++)
    {
        cout<<"Element ["<<i<<"] :";
        cin>>n.at(i);
        
    }
    cout<<"Output :"<<endl;
     for(int i;i<n.size();i++)
    {
        cout<<"Element ["<<i<<"] :"<<n.at(i)<<endl;
        
    }

    return 0;
}