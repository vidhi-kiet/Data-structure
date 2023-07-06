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
    array<int,5>n={6,5,7,8,5};
    cout<<"front :"<<n.front()<<endl;
    cout<<"back :"<<n.back()<<endl;
    n.front()=100;
    for(int &arr:n)
    {
        cout<<"array :"<<arr<<endl;
    }
    
     

    return 0;
}
