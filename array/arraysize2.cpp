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
  array<int,5> n={1,5,8,9,6};
  //taking values
for(int i=0;i<n.size();i++)
{
    cout<<"element no. ["<<i<<"] :";
    cin>>n[i];
    
}
//output values
for(int i=0;i<n.size();i++)
{
 cout << "n[" << i << "] = " << n[i] << endl;
 
}
    return 0;
}