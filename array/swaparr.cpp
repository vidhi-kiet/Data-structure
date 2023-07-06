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
    array<int,5>n1={1,8,9,7,6};
    array<int,5>n2={2,5,4,3,0};
    n1.swap(n2);

 cout<<"array1 :"<<endl;
    for(int &arr :n1)
    {
        cout<<arr<<" ";
    }
    cout<<"\narray 2:"<<endl;
    for(int &arr2 :n2)
    {
        cout<<arr2<<" ";
    }
     

    return 0;
}
