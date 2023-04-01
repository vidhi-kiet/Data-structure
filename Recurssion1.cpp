/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int fun(int n)
{
  if(n==1)
  {
      return 0;
  }
  else
  {
      return 1+fun(n/2);
  }
} 
 
 
int main()
{
    int n;
    cout<<"Enter the no. :";
    cin>>n;
    
    cout<<"Solution :"<<fun(n);

    return 0;
}